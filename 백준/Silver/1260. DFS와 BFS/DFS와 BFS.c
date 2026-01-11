#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 1001

int N, M, V;
int graph[MAX_N][MAX_N];
bool visited[MAX_N];
int queue[MAX_N*MAX_N];
int front, rear;

void dfs(int node) {
    visited[node] = true;
    printf("%d ", node);
    
    for (int i = 1; i <= N; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    front = rear = 0;
    queue[rear++] = start;
    visited[start] = true;
    printf("%d ", start);
    
    while (front < rear) {
        int curr = queue[front++];
        
        for (int i = 1; i <= N; i++) {
            if (graph[curr][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = true;
                printf("%d ", i);
            }
        }
    }
}

int main() {
    scanf("%d %d %d", &N, &M, &V);
    
    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = graph[v][u] = 1;
    }
    
    // DFS
    memset(visited, 0, sizeof(visited));
    dfs(V);
    printf("\n");
    
    // BFS
    memset(visited, 0, sizeof(visited));
    bfs(V);
    printf("\n");
    
    return 0;
}

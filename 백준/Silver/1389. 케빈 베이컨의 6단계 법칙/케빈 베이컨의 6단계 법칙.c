#include <stdio.h>
#include <string.h>

#define MAX_N 100

int N, M;
int adj[MAX_N + 1][MAX_N + 1];
int dist[MAX_N + 1];
int queue[MAX_N + 5];

int bfs(int start) {
    for (int i = 1; i <= N; i++) dist[i] = -1;
    
    int front = 0, rear = 0;
    queue[rear++] = start;
    dist[start] = 0;
    
    while (front < rear) {
        int cur = queue[front++];
        for (int nxt = 1; nxt <= N; nxt++) {
            if (adj[cur][nxt] && dist[nxt] == -1) {
                dist[nxt] = dist[cur] + 1;
                queue[rear++] = nxt;
            }
        }
    }
    
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += dist[i];
    }
    return sum;
}

int main(void) {
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    
    int best_person = 1;
    int best_sum = bfs(1);
    
    for (int i = 2; i <= N; i++) {
        int s = bfs(i);
        if (s < best_sum) {
            best_sum = s;
            best_person = i;
        }
    }
    
    printf("%d\n", best_person);
    return 0;
}

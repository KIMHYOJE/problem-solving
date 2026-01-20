#include <stdio.h>
#include <stdbool.h>

bool visited[1001];
int graph[1001][1001];

void dfs(int x) {
    visited[x] = true;
    
    for (int i = 1; i <= 1000; i++) {
        if (graph[x][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = graph[v][u] = 1;
    }
    
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            cnt++;
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}

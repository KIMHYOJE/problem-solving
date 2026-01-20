#include <stdio.h>
#include <stdbool.h>

bool visited[101];
int graph[101][101];
int ans = 0;

void dfs(int x) {
    visited[x] = true;
    ans++;
    
    for (int i = 1; i <= 100; i++) {
        if (graph[x][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = graph[b][a] = 1;
    }
    
    dfs(1);
    printf("%d\n", ans - 1);
    
    return 0;
}

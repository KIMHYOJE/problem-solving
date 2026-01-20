#include <stdio.h>
#include <string.h>

int map[1001][1001];
int dist[1001][1001];
int visited[1001][1001];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int sx, sy;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
            dist[i][j] = -1;
            if (map[i][j] == 2) {
                sx = i;
                sy = j;
                dist[i][j] = 0;
            }
        }
    }
    
    int front = 0, rear = 0;
    int queue[1000001][2];
    queue[rear][0] = sx;
    queue[rear++][1] = sy;
    visited[sx][sy] = 1;
    
    while (front < rear) {
        int x = queue[front][0];
        int y = queue[front][1];
        front++;
        
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] && !visited[nx][ny]) {
                visited[nx][ny] = 1;
                dist[nx][ny] = dist[x][y] + 1;
                queue[rear][0] = nx;
                queue[rear++][1] = ny;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 0) printf("0 ");
            else printf("%d ", dist[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

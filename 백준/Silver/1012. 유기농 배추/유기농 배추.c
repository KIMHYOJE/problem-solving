#include <stdio.h>
#include <stdbool.h>

int M, N, K;
int field[51][51];
bool visited[51][51];
int dx[4] = {0, 0, 1, -1};  // 상 하 우 좌
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y) {
    visited[x][y] = true;
    
    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        
        // 범위 내 + 배추O + 미방문
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && 
            field[nx][ny] && !visited[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main(void) {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d %d", &M, &N, &K);
        
        // 초기화
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) {
                field[i][j] = 0;
                visited[i][j] = false;
            }
        
        // 배추 위치 표시
        for (int i = 0; i < K; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            field[y][x] = 1;  // y,x 주의!
        }
        
        int worm = 0;
        // 전체 탐색
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (field[i][j] && !visited[i][j]) {
                    dfs(i, j);
                    worm++;
                }
            }
        }
        
        printf("%d\n", worm);
    }
    
    return 0;
}

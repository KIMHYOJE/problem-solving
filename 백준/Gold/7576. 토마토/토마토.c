#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>  // bool, true, false 추가!

int M, N;
int tomato[1001][1001];
int dist[1001][1001];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

typedef struct {
    int x, y;
} Pos;

int main() {
    scanf("%d %d", &M, &N);
    
    Pos *queue = (Pos *)malloc(sizeof(Pos) * M * N);
    int front = 0, rear = 0;
    int max_days = 0;
    bool all_ripe = true;
    
    memset(dist, -1, sizeof(dist));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &tomato[i][j]);
            if (tomato[i][j] == 1) {
                queue[rear++] = (Pos){i, j};
                dist[i][j] = 0;
            } else if (tomato[i][j] == 0) {
                all_ripe = false;
            }
        }
    }
    
    if (all_ripe) {
        printf("0\n");
        free(queue);
        return 0;
    }
    
    while (front < rear) {
        Pos curr = queue[front++];
        int days = dist[curr.x][curr.y];
        if (days > max_days) max_days = days;
        
        for (int d = 0; d < 4; d++) {
            int nx = curr.x + dx[d];
            int ny = curr.y + dy[d];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M &&
                tomato[nx][ny] == 0 && dist[nx][ny] == -1) {
                tomato[nx][ny] = 1;
                dist[nx][ny] = days + 1;
                queue[rear++] = (Pos){nx, ny};
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 0) {
                printf("-1\n");
                free(queue);
                return 0;
            }
        }
    }
    
    printf("%d\n", max_days);
    free(queue);
    return 0;
}

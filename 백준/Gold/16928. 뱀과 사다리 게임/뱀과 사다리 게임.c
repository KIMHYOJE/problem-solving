#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int N, M;
int ladder_snake[101];
int dist[101];
bool visited[101];

int dx[6] = {1,2,3,4,5,6};

int main() {
    scanf("%d %d", &N, &M);
    
    // 사다리/뱀 맵 초기화
    for (int i = 1; i <= 100; i++) ladder_snake[i] = i;
    
    for (int i = 0; i < N + M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        ladder_snake[u] = v;
    }
    
    // BFS: 1번 칸에서 시작
    memset(dist, -1, sizeof(dist));
    memset(visited, false, sizeof(visited));
    
    int front = 0, rear = 0;
    int queue[101];
    queue[rear++] = 1;
    dist[1] = 0;
    
    while (front < rear) {
        int curr = queue[front++];
        
        // 100번 도착!
        if (curr == 100) break;
        
        // 주사위 1~6 굴리기
        for (int d = 0; d < 6; d++) {
            int next = curr + dx[d];
            
            if (next > 100) continue;
            
            // 사다리/뱀 이동
            next = ladder_snake[next];
            
            if (!visited[next]) {
                visited[next] = true;
                dist[next] = dist[curr] + 1;
                queue[rear++] = next;
            }
        }
    }
    
    printf("%d\n", dist[100]);
    return 0;
}

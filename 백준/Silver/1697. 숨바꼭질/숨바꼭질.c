#include <stdio.h>
#include <string.h>

int visited[100001];
int dist[100001];

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    memset(visited, 0, sizeof(visited));
    
    int front = 0, rear = 0;
    int queue[100001];
    queue[rear++] = N;
    visited[N] = 1;
    dist[N] = 0;
    
    while (front < rear) {
        int x = queue[front++];
        
        if (x == K) {
            printf("%d\n", dist[x]);
            return 0;
        }
        
        int nx[3] = {x-1, x+1, x*2};
        for (int i = 0; i < 3; i++) {
            if (nx[i] >= 0 && nx[i] <= 100000 && !visited[nx[i]]) {
                visited[nx[i]] = 1;
                dist[nx[i]] = dist[x] + 1;
                queue[rear++] = nx[i];
            }
        }
    }
    
    return 0;
}

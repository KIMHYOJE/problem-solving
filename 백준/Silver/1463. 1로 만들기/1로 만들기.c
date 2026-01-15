#include <stdio.h>

int dp[1000001];

int main(void) {
    int N;
    scanf("%d", &N);
    
    dp[1] = 0;  // 1은 이미 1이므로 0번
    
    for (int i = 2; i <= N; i++) {
        // 1을 빼는 경우
        dp[i] = dp[i - 1] + 1;
        
        // 2로 나누어 떨어지는 경우
        if (i % 2 == 0) {
            if (dp[i] > dp[i / 2] + 1) {
                dp[i] = dp[i / 2] + 1;
            }
        }
        
        // 3으로 나누어 떨어지는 경우
        if (i % 3 == 0) {
            if (dp[i] > dp[i / 3] + 1) {
                dp[i] = dp[i / 3] + 1;
            }
        }
    }
    
    printf("%d\n", dp[N]);
    return 0;
}

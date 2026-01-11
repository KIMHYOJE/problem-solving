#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    
    int zero[41] = {1, 0};  // N=0,1 초기값
    int one[41] = {0, 1};
    
    // N=2~40 미리 계산
    for (int i = 2; i <= 40; i++) {
        zero[i] = one[i-1];
        one[i] = zero[i-1] + one[i-1];
    }
    
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        printf("%d %d\n", zero[N], one[N]);
    }
    
    return 0;
}

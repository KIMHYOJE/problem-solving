#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    int cnt = 0;
    
    // A: 짝수, 2, 4, ..., N-3 (B,C 최소 1+3=4 남겨야)
    for (int A = 2; A <= N - 3; A += 2) {
        // 남은 사탕: N - A
        int remain = N - A;
        
        // B: 1 ~ remain-3 (C=B+2~remain-1)
        for (int B = 1; B <= remain - 3; B++) {
            int C = remain - B;
            
            // C >= B + 2 확인
            if (C >= B + 2) {
                cnt++;
            }
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}

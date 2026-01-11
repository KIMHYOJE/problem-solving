#include <stdio.h>

long long z_order(int N, int r, int c) {
    long long ans = 0;
    
    while (N > 0) {
        int size = 1 << (N - 1);  // 2^(N-1)
        
        if (r < size && c < size) {
            //  왼쪽 위: +0
        } else if (r < size && c >= size) {
            //  오른쪽 위
            ans += (long long)size * size;
            c -= size;
        } else if (r >= size && c < size) {
            //  왼쪽 아래
            ans += 2LL * size * size;
            r -= size;
        } else {
            // 오른쪽 아래
            ans += 3LL * size * size;
            r -= size;
            c -= size;
        }
        N--;
    }
    return ans;
}

int main() {
    int N, r, c;
    scanf("%d %d %d", &N, &r, &c);
    printf("%lld\n", z_order(N, r, c));
    return 0;
}

#include <stdio.h>
#include <stdlib.h> // abs() 함수 사용을 위함

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);
    long long diff = N - M;
    if (diff < 0) diff = -diff;
    printf("%lld\n", diff);
    return 0;
}

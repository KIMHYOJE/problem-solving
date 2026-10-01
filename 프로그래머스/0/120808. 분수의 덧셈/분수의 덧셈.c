#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int top = (numer1 * denom2) + (numer2 * denom1);
    int bottom = denom1 * denom2;

    int common_divisor = gcd(top, bottom);

    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = top / common_divisor;
    answer[1] = bottom / common_divisor;

    return answer;
}
#include <stdio.h>

int main(void)
{
    long long a, b;
    long long result;

    if (scanf("%lld %lld", &a, &b) != 2) {
        return 0;
    }

    result = (a + b) * (a - b);

    printf("%lld\n", result);

    return 0;
}

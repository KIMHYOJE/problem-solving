#pragma warning(disable:4996)
#include <stdio.h>
 
int main() {
 
    int n, n2, tmp, sum, result = 0;
 
    scanf("%d", &n);
 
    for (int i = 1; i < n; i++) {
        n2 = i, sum = i;
        while (n2 != 0) {
            tmp = n2 % 10;
            sum += tmp;
            n2 /= 10;
        }
        if (n == sum) {
            result = i;
            break;
        }
    }
    printf("%d\n", result);
 
    return 0;
}
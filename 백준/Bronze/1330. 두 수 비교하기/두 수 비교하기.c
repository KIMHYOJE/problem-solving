#include <stdio.h>

int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);
	if (A > B) {
        printf(">");
    } else if(A < B) {
        printf("<");
    } else {
        printf("==");
    }
    return 0;
}
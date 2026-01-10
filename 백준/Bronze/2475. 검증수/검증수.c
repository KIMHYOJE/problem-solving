#include<stdio.h>
int main() {
	int a[6], i, sum = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		a[i] *= a[i];
		sum += a[i];
	}
	sum %= 10;
	printf("%d", sum);
}
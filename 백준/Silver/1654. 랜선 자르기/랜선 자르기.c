#include<stdio.h>
#include<stdlib.h>
int main() {
	long long K, N;
	long long low = 1;
	long long high=-1, mid;
	long long line[10001] = {0,};
	long result = 0;
	long sum = 0;//mid로 나눈 값,합치기
	long i,j;

	scanf("%lld %lld", &K, &N);

	for (i = 0; i < K; i++) {
		scanf("%lld", &line[i]);
		high = high < line[i] ? line[i] : high;
	}
	while (low <= high) {
		mid = (low + high) / 2;
		sum = 0;
		for (j = 0; j < K; j++) {
			sum += (line[j] / mid);
		}
		if (sum < N) {
			high = mid - 1;
		}
		else if (sum >= N) {
			low =mid+1;
			result = result < mid ? mid : result;
		}


	}

	printf("%ld", result);
	return 0;
}
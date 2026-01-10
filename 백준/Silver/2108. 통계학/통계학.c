#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define OFFSET 4000  // 값의 범위가 -4000 ~ 4000 이므로 이를 보정
#define MAX_SIZE 8001  // -4000 ~ 4000 총 8001개의 정수

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, i;
    int numbers[500000];
    int count[MAX_SIZE] = {0};  // 빈도 저장용
    int sum = 0;
    int max_freq = 0;
    int mode_candidates[2];  // 최빈값 후보 중 2개까지 저장
    int mode_count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        count[numbers[i] + OFFSET]++;
    }

    // 산술 평균
    int avg = round((double)sum / n);

    // 중앙값을 위해 정렬
    qsort(numbers, n, sizeof(int), compare);
    int median = numbers[n / 2];

    // 최빈값
    for (i = 0; i < MAX_SIZE; i++) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            mode_candidates[0] = i - OFFSET;
            mode_count = 1;
        } else if (count[i] == max_freq && mode_count < 2) {
            mode_candidates[mode_count++] = i - OFFSET;
        }
    }

    int mode;
    if (mode_count == 1)
        mode = mode_candidates[0];
    else
        mode = mode_candidates[1];  // 두 번째로 작은 값 출력

    // 범위
    int range = numbers[n - 1] - numbers[0];

    // 출력
    printf("%d\n", avg);
    printf("%d\n", median);
    printf("%d\n", mode);
    printf("%d\n", range);

    return 0;
}

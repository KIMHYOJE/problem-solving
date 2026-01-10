#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count5 = N / 5;
    int count3;
    while (count5 >= 0) {
        int remainder = N - count5 * 5;
        if (remainder % 3 == 0) {
            count3 = remainder / 3;
            printf("%d\n", count5 + count3);
            return 0;
        }
        count5--;
    }

    // 만들 수 없는 경우
    printf("-1\n");
    return 0;
}

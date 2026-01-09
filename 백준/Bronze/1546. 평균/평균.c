#include <stdio.h>

int main()
{
    int N;
    int max = 0;
    float avg = 0;

    scanf("%d", &N);

    int score[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (max < score[i]) {
            max = score[i];
        }
    }

    for (int i = 0; i < N; i++) {
        avg += (float)score[i] / max * 100;
    }

    printf("%f\n", avg / N);

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 1000001

char S[MAX], P[MAX];
int pi[MAX];

int main(void) {
    scanf("%s", S);
    scanf("%s", P);

    int n = strlen(S);
    int m = strlen(P);

    int j = 0;
    for (int i = 1; i < m; i++) {
        while (j > 0 && P[i] != P[j]) {
            j = pi[j - 1];
        }
        if (P[i] == P[j]) {
            j++;
            pi[i] = j;
        }
    }

    j = 0;
    for (int i = 0; i < n; i++) {
        while (j > 0 && S[i] != P[j]) {
            j = pi[j - 1];
        }
        if (S[i] == P[j]) {
            if (j == m - 1) {
                printf("1\n");
                return 0;
            } else {
                j++;
            }
        }
    }

    printf("0\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 20000
#define MAX_L 50

char words[MAX_N][MAX_L + 1];
int length[MAX_N];

int cmp(const void* a, const void* b) {
    if (length[*(int*)a] != length[*(int*)b]) {
        return length[*(int*)a] - length[*(int*)b];
    } else {
        return strcmp(words[*(int*)a], words[*(int*)b]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int indices[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
        length[i] = strlen(words[i]);
        indices[i] = i;
    }

    qsort(indices, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) {
        if (i > 0 && strcmp(words[indices[i]], words[indices[i-1]]) == 0) {
            continue;
        }
        printf("%s\n", words[indices[i]]);
    }

    return 0;
}

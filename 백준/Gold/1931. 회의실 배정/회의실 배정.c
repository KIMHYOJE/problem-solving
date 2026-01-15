#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} Meeting;

int compare(const void *a, const void *b) {
    Meeting *m1 = (Meeting *)a;
    Meeting *m2 = (Meeting *)b;
    
    if (m1->end == m2->end) {
        return m1->start - m2->start;
    }
    return m1->end - m2->end;
}

int main(void) {
    int N;
    scanf("%d", &N);
    
    Meeting *meetings = (Meeting *)malloc(sizeof(Meeting) * N);
    if (meetings == NULL) return 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &meetings[i].start, &meetings[i].end);
    }
    
    qsort(meetings, N, sizeof(Meeting), compare);
    
    int count = 0;
    int last_end = 0;
    
    for (int i = 0; i < N; i++) {
        if (meetings[i].start >= last_end) {
            count++;
            last_end = meetings[i].end;
        }
    }
    
    printf("%d\n", count);
    
    free(meetings);
    return 0;
}

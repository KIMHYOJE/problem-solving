#include <stdio.h>

long long heap[100001];
int size = 0;

void sift_up(int i) {
    while (i > 1) {
        int p = i / 2;
        if (heap[p] <= heap[i]) break;
        long long t = heap[p];
        heap[p] = heap[i];
        heap[i] = t;
        i = p;
    }
}

void sift_down(int i) {
    while (2 * i <= size) {
        int c = 2 * i;
        if (c + 1 <= size && heap[c + 1] < heap[c]) c++;
        if (heap[i] <= heap[c]) break;
        long long t = heap[i];
        heap[i] = heap[c];
        heap[c] = t;
        i = c;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
        
        if (x == 0) {
            if (size == 0) {
                printf("0\n");
            } else {
                printf("%lld\n", heap[1]);
                heap[1] = heap[size];
                size--;
                sift_down(1);
            }
        } else {
            size++;
            heap[size] = x;
            sift_up(size);
        }
    }
    
    return 0;
}

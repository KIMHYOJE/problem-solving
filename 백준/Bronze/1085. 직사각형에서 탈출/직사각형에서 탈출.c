
#include <stdio.h>

int main() {
    int x, y, w, h;
    int min_distance;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    min_distance = x < w - x ? x : w - x;
    min_distance = y < h - y ? (y < min_distance ? y : min_distance) : (h - y < min_distance ? h - y : min_distance);

    printf("%d\n", min_distance);

    return 0;
}
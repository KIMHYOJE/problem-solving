#include <stdio.h>

int main(void) {
    int s1, s2;
    
    scanf("%d %d", &s1, &s2);
    
    if (s1 * 2 >= s2) {
        printf("E\n");
    } else {
        printf("H\n");
    }
    
    return 0;
}

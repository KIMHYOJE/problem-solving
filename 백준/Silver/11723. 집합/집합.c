#include <stdio.h>
#include <string.h>

int main() {
    int M;
    scanf("%d", &M);
    
    int s = 0;
    char op[10];
    
    for (int i = 0; i < M; i++) {
        scanf("%s", op);
        
        if (op[0] == 'a') {
            if (op[1] == 'l') {
                s = (1 << 21) - 1;
            } else {
                int x;
                scanf("%d", &x);
                s |= (1 << x);
            }
        } else if (op[0] == 'r') {
            int x;
            scanf("%d", &x);
            s &= ~(1 << x);
        } else if (op[0] == 'c') {
            int x;
            scanf("%d", &x);
            printf("%d\n", (s & (1 << x)) ? 1 : 0);
        } else if (op[0] == 't') {
            int x;
            scanf("%d", &x);
            s ^= (1 << x);
        } else if (op[0] == 'e') {
            if (op[1] == 'm') {
                s = 0;
            }
        }
    }
    
    return 0;
}

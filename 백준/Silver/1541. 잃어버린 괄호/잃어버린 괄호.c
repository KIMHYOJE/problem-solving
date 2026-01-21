#include <stdio.h>
#include <string.h>

int main() {
    char expr[51];
    scanf("%s", expr);
    
    int result = 0;
    int num = 0;
    int minus = 0;
    
    for (int i = 0; expr[i]; i++) {
        if (expr[i] >= '0' && expr[i] <= '9') {
            num = num * 10 + (expr[i] - '0');
        } else {
            if (minus) {
                result -= num;
            } else {
                result += num;
            }
            num = 0;
            
            if (expr[i] == '-') {
                minus = 1;
            }
        }
    }
    
    if (minus) {
        result -= num;
    } else {
        result += num;
    }
    
    printf("%d\n", result);
    return 0;
}

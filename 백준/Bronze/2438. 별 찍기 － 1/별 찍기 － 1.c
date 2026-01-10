#include <stdio.h>
 
int main(){
    int count;
    scanf("%d", &count);
    for(int i = 0; i < count; i++) {
        for(int j = 0; j < i + 1; j++) 
            printf("*");
        printf("\n");
    }
 
    return 0;
}
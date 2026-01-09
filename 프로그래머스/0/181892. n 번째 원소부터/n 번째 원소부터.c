#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int num_list[], size_t num_list_len, int n) {
    
    size_t result_len = num_list_len - (n - 1);

    int *answer = (int *)malloc(sizeof(int) * result_len);
    if (answer == NULL) {
        return NULL; 
    }

   
    size_t j = 0;
    for (size_t i = n - 1; i < num_list_len; i++) {
        answer[j] = num_list[i];
        j++;
    }

    return answer;
}

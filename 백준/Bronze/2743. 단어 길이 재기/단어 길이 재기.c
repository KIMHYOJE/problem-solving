#include <stdio.h>
#include <string.h>

int main() {
    char word[101];  // 최대 길이 100 + null 문자
    scanf("%s", word);

    printf("%lu\n", strlen(word));

    return 0;
}

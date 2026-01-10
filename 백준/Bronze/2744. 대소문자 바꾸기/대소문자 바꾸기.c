#include <stdio.h>
#include <ctype.h>  // tolower, toupper 함수 사용

int main() {
    char word[101];
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        if (islower(word[i])) {
            // 소문자면 대문자로 변환
            word[i] = toupper(word[i]);
        } else if (isupper(word[i])) {
            // 대문자면 소문자로 변환
            word[i] = tolower(word[i]);
        }
    }

    printf("%s\n", word);
    return 0;
}

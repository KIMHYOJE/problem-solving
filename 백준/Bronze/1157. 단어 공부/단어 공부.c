#include <stdio.h>
#include <ctype.h>

int main() {
    char word[1000001];
    int count[26] = {0,};
    int max_count = 0, max_index = 0;
    int i;

    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++) {
        int index = toupper(word[i]) - 'A';
        count[index]++;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_index = i;
        }
    }

    for (i = 0; i < 26; i++) {
        if (i == max_index) {
            continue;
        }
        if (count[i] == max_count) {
            printf("?\n");
            return 0;
        }
    }

    printf("%c\n", max_index + 'A');

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char grade[3];
    scanf("%s", grade);

    if (strcmp(grade, "A+") == 0) printf("4.3\n");
    else if (strcmp(grade, "A0") == 0) printf("4.0\n");
    else if (strcmp(grade, "A-") == 0) printf("3.7\n");
    else if (strcmp(grade, "B+") == 0) printf("3.3\n");
    else if (strcmp(grade, "B0") == 0) printf("3.0\n");
    else if (strcmp(grade, "B-") == 0) printf("2.7\n");
    else if (strcmp(grade, "C+") == 0) printf("2.3\n");
    else if (strcmp(grade, "C0") == 0) printf("2.0\n");
    else if (strcmp(grade, "C-") == 0) printf("1.7\n");
    else if (strcmp(grade, "D+") == 0) printf("1.3\n");
    else if (strcmp(grade, "D0") == 0) printf("1.0\n");
    else if (strcmp(grade, "D-") == 0) printf("0.7\n");
    else if (strcmp(grade, "F") == 0) printf("0.0\n");

    return 0;
}

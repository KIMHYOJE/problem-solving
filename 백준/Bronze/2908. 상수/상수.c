#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B); // 두 수를 입력받음

    // A를 뒤집음
    int newA = 0;
    while(A > 0) {
        newA = newA * 10 + (A % 10);
        A /= 10;
    }

    // B를 뒤집음
    int newB = 0;
    while(B > 0) {
        newB = newB * 10 + (B % 10);
        B /= 10;
    }

    // 두 수 중 큰 수를 출력함
    if(newA > newB) printf("%d", newA);
    else printf("%d", newB);

    return 0;
}

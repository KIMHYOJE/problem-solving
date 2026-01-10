#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M); // 시간과 분을 읽어들임
    M -= 45; // 45분을 빼줌
    if(M < 0) { // 분이 음수가 된 경우
        M += 60; // 60분을 더해주고
        H -= 1; // 시간을 1시간 감소시킴
        if(H < 0) H += 24; // 시간이 음수가 된 경우 24를 더해줌
    }
    printf("%d %d", H, M); // 결과 출력
    return 0;
}

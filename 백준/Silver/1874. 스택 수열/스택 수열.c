#include <stdio.h>

int stack[100001];  // 스택으로 사용할 배열
int top = -1;  // 스택의 탑을 나타내는 인덱스

int main() {
    int n;
    scanf("%d", &n);

    int sequence[100001];  // 입력된 수열을 저장할 배열
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }

    int num = 1;  // 스택에 넣을 다음 숫자
    int seqIdx = 0;  // 입력 수열을 가리키는 인덱스

    char result[200001];  // 연산 결과를 저장할 배열
    int resultIdx = 0;  // 결과 배열의 인덱스

    while (seqIdx < n) {
        if (top >= 0 && stack[top] == sequence[seqIdx]) {
            // 스택의 탑이 입력 수열과 같다면 pop 연산 수행
            stack[top--] = 0;
            result[resultIdx++] = '-';
            seqIdx++;
        } else {
            // 스택에 숫자를 push
            if (num > n) {
                // 스택에 넣을 수가 N보다 크면 수열을 만들 수 없음
                printf("NO\n");
                return 0;
            }
            stack[++top] = num;
            result[resultIdx++] = '+';
            num++;
        }
    }

    // 연산 결과 출력
    for (int i = 0; i < resultIdx; i++) {
        printf("%c\n", result[i]);
    }

    return 0;
}

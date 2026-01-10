#include <stdio.h>
#include <stdlib.h>

// 큐에 저장할 튜플 구조체 정의
typedef struct {
    int priority; // 중요도
    int index; // 인덱스
} tuple;

// 큐 구조체 정의
typedef struct {
    tuple *data; // 데이터 배열
    int front; // 앞쪽 인덱스
    int rear; // 뒤쪽 인덱스
    int size; // 크기
    int capacity; // 용량
} queue;

// 큐 생성 함수
queue *create_queue(int capacity) {
    queue *q = (queue *)malloc(sizeof(queue)); // 큐 동적 할당
    q->data = (tuple *)malloc(sizeof(tuple) * capacity); // 데이터 배열 동적 할당
    q->front = 0; // 앞쪽 인덱스 초기화
    q->rear = 0; // 뒤쪽 인덱스 초기화
    q->size = 0; // 크기 초기화
    q->capacity = capacity; // 용량 설정
    return q; // 큐 반환
}

// 큐 비우기 함수
void clear_queue(queue *q) {
    q->front = 0; // 앞쪽 인덱스 초기화
    q->rear = 0; // 뒤쪽 인덱스 초기화
    q->size = 0; // 크기 초기화
}

// 큐 삭제 함수
void delete_queue(queue *q) {
    free(q->data); // 데이터 배열 해제
    free(q); // 큐 해제
}

// 큐가 비어있는지 확인하는 함수
int is_empty(queue *q) {
    return q->size == 0; // 크기가 0이면 비어있음
}

// 큐가 가득 차있는지 확인하는 함수
int is_full(queue *q) {
    return q->size == q->capacity; // 크기가 용량과 같으면 가득 참
}

// 큐에 데이터 삽입하는 함수
void enqueue(queue *q, tuple t) {
    if (is_full(q)) { // 큐가 가득 차있으면
        printf("Queue is full.\n"); // 오류 메시지 출력
        return; // 함수 종료
    }
    q->data[q->rear] = t; // 뒤쪽 인덱스에 데이터 저장
    q->rear = (q->rear + 1) % q->capacity; // 뒤쪽 인덱스 증가 (원형 큐)
    q->size++; // 크기 증가
}

// 큐에서 데이터 삭제하고 반환하는 함수
tuple dequeue(queue *q) {
    if (is_empty(q)) { // 큐가 비어있으면
        printf("Queue is empty.\n"); // 오류 메시지 출력
        tuple t = {-1, -1}; // 임의의 튜플 생성
        return t; // 튜플 반환
    }
    tuple t = q->data[q->front]; // 앞쪽 인덱스의 데이터 저장
    q->front = (q->front + 1) % q->capacity; // 앞쪽 인덱스 증가 (원형 큐)
    q->size--; // 크기 감소
    return t; // 튜플 반환
}

// 큐에서 가장 앞에 있는 데이터를 반환하는 함수 (삭제하지 않음)
tuple peek(queue *q) {
    if (is_empty(q)) { // 큐가 비어있으면
        printf("Queue is empty.\n"); // 오류 메시지 출력
        tuple t = {-1, -1}; // 임의의 튜플 생성
        return t; // 튜플 반환
    }
    return q->data[q->front]; // 앞쪽 인덱스의 데이터 반환
}

// 주어진 문서의 중요도가 큐에 남아있는 다른 문서들의 중요도보다 작은지 확인하는 함수
int is_less_important(queue *q, tuple t) {
    int count = q->size; // 남아있는 문서의 수 저장
    int index = q->front; // 현재 검사할 문서의 인덱스 저장
    while (count--) { // 문서의 수만큼 반복
        if (q->data[index].priority > t.priority) { // 검사할 문서의 중요도가 주어진 문서의 중요도보다 크면
            return 1; // 참을 반환
        }
        index = (index + 1) % q->capacity; // 다음 문서의 인덱스로 이동 (원형 큐)
    }
    return 0; // 거짓을 반환
}

// 메인 함수
int main() {
    int T; // 테스트 케이스의 수
    scanf("%d", &T); // 테스트 케이스의 수 입력받기

    while (T--) { // 테스트 케이스만큼 반복하기
        int N, M; // 문서의 수와 원하는 문서의 위치
        scanf("%d %d", &N, &M); // 문서의 수와 원하는 문서의 위치 입력받기

        queue *q = create_queue(N); // 문서의 수만큼 용량을 가진 큐 생성하기

        for (int i = 0; i < N; i++) { // 문서의 수만큼 반복하기
            int priority; // 문서의 중요도
            scanf("%d", &priority); // 문서의 중요도 입력받기
            tuple t = {priority, i}; // 문서의 중요도와 인덱스를 튜플로 저장하기
            enqueue(q, t); // 큐에 튜플 삽입하기
        }

        int count = 0; // 출력한 문서의 수

        while (!is_empty(q)) { // 큐가 비어있지 않으면 반복하기
            tuple t = dequeue(q); // 큐에서 문서 하나 꺼내기

            if (is_less_important(q, t)) { // 꺼낸 문서의 중요도가 낮으면
                enqueue(q, t); // 다시 큐에 넣기
            } else { // 꺼낸 문서의 중요도가 높거나 같으면
                count++; // 출력한 문서의 수 증가
                if (t.index == M) { // 꺼낸 문서가 원하는 문서이면
                    printf("%d\n", count); // 출력한 순서 출력하기
                    break; // 반복문 종료하기
                }
            }
        }

        delete_queue(q); // 큐 삭제하기
    }

    return 0; // 프로그램 종료하기
}
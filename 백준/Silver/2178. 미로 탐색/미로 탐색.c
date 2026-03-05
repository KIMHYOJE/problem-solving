#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct _pos
{
	int xpos;
	int ypos;
}Pos;
typedef Pos Data;

typedef struct _node
{
	Data data;
	struct _node* next;
} Node;

typedef struct _lQueue
{
	Node* front;
	Node* rear;
} LQueue;
typedef LQueue Queue;

void QueueInit(Queue* pq)
{
	pq->front = NULL;
	pq->rear = NULL;
}

int QIsEmpty(Queue* pq)
{
	if (pq->front == NULL)
		return TRUE;
	else
		return FALSE;
}

void Enqueue(Queue* pq, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = data;

	if (QIsEmpty(pq))
	{
		pq->front = newNode;
		pq->rear = newNode;
	}
	else
	{
		pq->rear->next = newNode;
		pq->rear = newNode;
	}
}

Data Dequeue(Queue* pq)
{
	Node* delNode;
	Data retData;

	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	delNode = pq->front;
	retData = delNode->data;
	pq->front = pq->front->next;

	free(delNode);
	return retData;
}

Data QPeek(Queue* pq)
{
	if (QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	return pq->front->data;
}

void BFS(int** arr, int n, int m)
{
	Queue pq;
	Data visit;
	Data next;
	QueueInit(&pq);

	int** visitinfo = (int**)calloc(n, sizeof(int*));	// 방문 여부를 저장하는 배열
	for (int i = 0; i < n; i++)
		visitinfo[i] = (int*)calloc(m, sizeof(int));

	arr[0][0] = 1;	// 시작지점
	visit.xpos = 0;
	visit.ypos = 0;

	Enqueue(&pq, visit);
	visitinfo[0][0] = 1; 	// 시작지점 방문함

	while (!QIsEmpty(&pq))
	{
		visit = Dequeue(&pq);

		if (visit.xpos - 1 >= 0 && arr[visit.xpos - 1][visit.ypos] == 1 && visitinfo[visit.xpos - 1][visit.ypos] == 0)
		{	// 상
			arr[visit.xpos - 1][visit.ypos] = arr[visit.xpos][visit.ypos] + 1;
			visitinfo[visit.xpos - 1][visit.ypos] = 1;
			next.xpos = visit.xpos - 1;
			next.ypos = visit.ypos;

			Enqueue(&pq, next);
		}
		if (visit.xpos + 1 < n && arr[visit.xpos + 1][visit.ypos] == 1 && visitinfo[visit.xpos + 1][visit.ypos] == 0)
		{	// 하
			arr[visit.xpos + 1][visit.ypos] = arr[visit.xpos][visit.ypos] + 1;
			visitinfo[visit.xpos + 1][visit.ypos] = 1;
			next.xpos = visit.xpos + 1;
			next.ypos = visit.ypos;

			Enqueue(&pq, next);
		}
		if (visit.ypos - 1 >= 0 && arr[visit.xpos][visit.ypos - 1] == 1 && visitinfo[visit.xpos][visit.ypos - 1] == 0)
		{	// 좌
			arr[visit.xpos][visit.ypos - 1] = arr[visit.xpos][visit.ypos] + 1;
			visitinfo[visit.xpos][visit.ypos - 1] = 1;
			next.xpos = visit.xpos;
			next.ypos = visit.ypos - 1;

			Enqueue(&pq, next);
		}
		if (visit.ypos + 1 < m && arr[visit.xpos][visit.ypos + 1] == 1 && visitinfo[visit.xpos][visit.ypos + 1] == 0)
		{	// 우
			arr[visit.xpos][visit.ypos + 1] = arr[visit.xpos][visit.ypos] + 1;
			visitinfo[visit.xpos][visit.ypos + 1] = 1;
			next.xpos = visit.xpos;
			next.ypos = visit.ypos + 1;

			Enqueue(&pq, next);
		}
	}
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int** arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%1d", &arr[i][j]);
	}

	BFS(arr, n, m);

	printf("%d", arr[n - 1][m - 1]);

	return 0;
}
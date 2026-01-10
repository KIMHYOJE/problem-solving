#include <stdio.h>

void merge(int a[], int low, int mid, int hight)    //분리된 배열 정렬 및 병합 함수
{
	int b[1000000];
	int i = low;        //왼쪽 시작
	int j = mid + 1;    //오른쪽 시작
	int k = 0;          //배열 b의 인덱스 값
	
	while(i <= mid && j <= hight)
	{
		if(a[i] <= a[j])        //분리된 왼쪽 배열과 오른쪽 배열 비교
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while(i <= mid)             //비교하지 않은 왼쪽 배열이 있다면 배열 b에 전부 채우기
		b[k++] = a[i++];
	while(j <= hight)           //비교하지 않은 오른쪽 배열이 있다면 배열 b에 전부 채우기
		b[k++] = a[j++];
	k--;
    
	while(k >= 0)               //배열 b 내용을 배열 a 내용에 덮어쓰기
	{
		a[low + k] = b[k];
		k--;
	}
}
void mergeSort(int a[], int low, int hight)    //배열의 요소를 분할하는 함수
{
	
	int mid;
	if(low < hight)
	{
		mid = (low + hight) / 2;
		mergeSort(a, low, mid);            //왼쪽 배열의 요소 분리
		mergeSort(a, mid + 1, hight);      //오른쪽 배열의 요소 분리
		merge(a, low, mid, hight);         //분리된 배열 정렬 및 병합 함수
	}
}
int main(void)
{
	int arr[1000000];
	int i, cnt;        //cnt : 입력 횟수
	
	scanf("%d", &cnt);
	
	for(i = 0 ; i < cnt; i++)
		scanf("%d", &arr[i]);
    
	mergeSort(arr, 0, cnt - 1);    //배열의 요소를 분할하는 함수
	
    for(i = 0; i < cnt; i++)
		printf("%d ", arr[i]);
}
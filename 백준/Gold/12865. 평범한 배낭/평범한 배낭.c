#include <stdio.h>
 
int max(int a, int b);
 
int main(void){
    int N, K;
    scanf("%d %d", &N, &K);
 
    int objects[N][2];
    for(int i=0; i<N; i++){
        scanf("%d %d", &objects[i][0], &objects[i][1]);
    }
 
    int value[N+1][K+1];
    //value[i][j] : 첫 i개의 물건으로 j 이하의 무게를 만들 때 최대 가치합
    //최종 답: value[N][K]
    for(int i=0; i<N+1; i++){
        value[i][0] = 0;
    }
    for(int i=0; i<K+1; i++){
        value[0][i] = 0;
    }
    for(int i=1; i<N+1; i++){
        for(int j=1; j<K+1; j++){
            if(objects[i-1][0]>j)
                value[i][j] = value[i-1][j];
            else{
                value[i][j] = max(value[i-1][j], value[i-1][j-objects[i-1][0]] + objects[i-1][1]);
            }
        }
    }
 
  
 
    printf("%d\n", value[N][K]);
}
 
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
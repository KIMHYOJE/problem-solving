#include <stdio.h>
#include <string.h>


int main(void){
  
  char arr[1000000]; 
  int i,cnt=0,len;

  scanf("%[^\n]",arr); // ["%^\n"]은 엔터가 나올때까지 문자열로 받는다는 말이다( 공백도 포함 )
  len = strlen(arr); // 받은 값을 len 변수에 넣어주었다.

  if (len == 1){   // 만약 공백 하나만 입력되었을때를 위한 if 문 처리를 해주어서 0이 출력되게 함 
    if( arr[i] == ' '){
      printf("0\n");
      return 0;
    }
  }

  for(i = 1; i<len-1; i++){  // 공백의 갯수로 단어의 갯수를 체크 하기 때문에 처음과 끝에 공백이 들어올 경우를 위해 int를 1 로 지정하고 끝나는 지점은 -1 을 해주어 처음과 끝의 공백을 제거해주었다.
    if( arr[i] == ' '){
      cnt++;
    }
  }

  printf("%d", cnt+1); // 공백의 갯수로 단어의 갯수를 체크했기 때문에 +1로 출력해주었다. ( ex  - 단어가 4개가 들어가려면 공백이 세개 ) 

  return 0;
}
#include <stdio.h>
int main(){
    int a,b,c=0,d=0;
	scanf("%d %d",&a,&b);
    d=b;
    c=b%10;
    printf("%d\n",a*c);
    b=b/10;
    c=b%10;
    printf("%d\n",a*c);
    b=b/10;
    c=b%10;
    printf("%d\n",a*c);
    b=b/10;
    printf("%d\n",a*d);
	return 0;
}

#include<stdio.h>
int main(){
    int n;
    int a=0;
    scanf("%d",&n);
   if(n%4==0){
       if(n%100>0){
           a=1;
       }else if(n%400==0){
           a=1;
       }
   }
    printf("%d",a);
}
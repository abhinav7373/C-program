// wap to print first N terms of fibnacci series//


#include<stdio.h>
#include<conio.h>
int main(){
   int a=0,b=1,i,n,c;
   printf("enter no\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    printf("%d",a);
     c=a+b;
     a=b;
     b=c;
   }
}
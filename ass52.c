// wap to calculate factorial of a no//


#include<stdio.h>
#include<conio.h>
int main(){
   int n,i,sum=1;
   printf("enter no");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    sum=sum*i;
   }
   printf("%d",sum);

}
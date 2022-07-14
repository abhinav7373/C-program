//wap to print sum of first N no//


#include<stdio.h>
#include<conio.h>
int main(){
   int n,i,sum=0;
   printf("enter no\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    sum=sum+i;
   }
   printf("%d",sum);

}
//wap to calculate sum of first N odd no//


#include<stdio.h>
#include<conio.h>
int main(){
   int n,i,sum=0;
   printf("enter no");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    if(i%2!=0)
    sum=sum+i;
   }
   printf("%d",sum);

}
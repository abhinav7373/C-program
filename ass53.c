// wap to count digit in a given no//


#include<stdio.h>
#include<conio.h>
int main(){
   int n,i,count=0;
   printf("enter no");
   scanf("%d",&n);
   while(n>0){
    n=n/10;
    count++;
   }
   printf("%d",count);

}
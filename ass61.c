// wap to check given no is prime or not//


#include<stdio.h>
#include<conio.h>
int main(){
    int  n,count=0,i,j;
    printf("enter no\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            printf("no is prime");
        }
        else{
            printf("no is not prime");
        }
  
}
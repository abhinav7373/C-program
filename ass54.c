// wap to calculate sum of digits of a given no//

#include<stdio.h>
#include<conio.h>
int main(){
    int  n,r,sum=0;
    printf("enter no");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum + r;
    }
    printf("%d",sum);

}
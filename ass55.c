// wap to reverse a no//

#include<stdio.h>
#include<conio.h>
int main(){
    int  n,r;
    printf("enter no");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
    printf("%d",r);
    }

}
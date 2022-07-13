// wap to check no is +ive or -ive or 0//

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter no\n");
    scanf("%d",&n);
    if(n==0){
        printf("no is zero");
    }
    else if(n>0){
        printf("no is positive");
    }
    else{
        printf("no is negative");
    }
    return 0;
}
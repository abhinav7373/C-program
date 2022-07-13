// wap to check no is +ive or -ive//
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter no\n");
    scanf("%d",&n);
    if(n==0){
        printf("no is zero and zero is neither +ive nor -ive");
    }
    else if(n>0){
        printf("no is positive");
    }
    else{
        printf("no is negative");
    }
    return 0;
}
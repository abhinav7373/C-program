// wap to check no is even or odd without %//

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter no\n");
    scanf("%d",&n);
    if((n/2)*2==n){
        printf("no is even");
    }
    else{
        printf("no is odd");
    }
}
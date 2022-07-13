//wap to check no is divisible by 5//

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter no\n");
    scanf("%d",&n);
    if(n%5==0){
        printf("no is divisible by 5");
    }
    else{
        printf("no is not divisible by 5");
    }
}
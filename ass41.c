//wap to print first 10 natural no and also print in reverse order//
//wap to print N natural no//


#include<stdio.h>
#include<conio.h>
int main(){
    int n=10,N;
    for(int i=1;i<=10;i++)
    printf("%d\t",i);
    printf("\nno is reverse order\n");
    for(int j=10;j>=1;j--)
    printf("%d\t",j);
    printf("\nnext program\n");
    printf("enter no to print N natural no\n");
    scanf("%d",&N);
    for(int k=1;k<=N;k++)
    printf("%d\t",k);
}
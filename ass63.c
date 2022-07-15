// wap to print all factors of a given no//

#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
    printf("enter no\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
}
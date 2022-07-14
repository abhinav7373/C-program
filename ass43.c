//wap to print first 10 odd no also in reverse order//
//wap to print N odd no//

#include<stdio.h>
#include<conio.h>
int main(){
    int n=10,N,i,j,k;
    for(i=1;i<=10;i++){
        if(i%2!=0)
    printf("%d\t",i);
    }
    printf("\nno is reverse order\n");
    for(j=10;j>=1;j--){
        if(j%2!=0)
    printf("%d\t",j);
    }
    printf("\nnext program\n");
    printf("enter no to print N even no\n");
    scanf("%d",&N);
    for(k=1;k<=N;k++){
        if(k%2!=0)
    printf("%d\t",k);
}
}
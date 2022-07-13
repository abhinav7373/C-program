//wap to find greater no b/w three no/

#include<stdio.h>
#include<conio.h>
int main(){
     int a,b,c;
     printf("enter three no");
     scanf("%d%d%d",&a,&b,&c);
     if(a>b && a>c){
        printf("a is greater among them");
     }
     else if(b>a && b>c){
        printf("b is greater among them");
     }
     else{
        printf("c is greater among them");
     }
}
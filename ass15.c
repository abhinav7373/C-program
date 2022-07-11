//wap to calculate average of three no on the screen//

#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter three no\n");
    scanf("%d%d%d",&a,&b,&c);
    int avg=(a+b+c)/3;
    printf("%d",avg);
    return 0;
}
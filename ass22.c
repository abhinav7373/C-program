//wap to swap values of two int var. without third var//

#include<stdio.h>
#include<conio.h>
int main(){
    int a=10,b=20;
    printf("the value of a=%d&b=%d before swap\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a=%d&b=%d after swap\n",a,b);
    return 0;
}
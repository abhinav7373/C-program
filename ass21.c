//wap to swap values of two int var.//

#include<stdio.h>
#include<conio.h>
int main(){
    int a=10,b=20;
    printf("the value of a=%d&b=%d before swap\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("the value of a=%d&b=%d after swap\n",a,b);
    return 0;
}
//wap to check given year is leap year or not//

#include<stdio.h>
#include<conio.h>
int main()
{
    int n=2028;
    if(n%400==0 || n%4==0 && n%100!= 0){
        printf("yes");
    }
    else{
        printf("not");
    }
    return 0;
}
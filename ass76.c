/* wap to print pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

                              */

#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,sum=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){

                  printf("%d  ",sum++);
           
            
        }
        printf("\n");
}
}
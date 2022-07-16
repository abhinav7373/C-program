/* wap to print pattern 
****   and  1
***         12
**          123  
*           1234
                   */
                  
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j<=5-i){
               printf("*");
            }
        }
        printf("\n");
    }
    printf("next program\n");
     for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j<=i){
               printf("%d",j);
            }
        }
        printf("\n");
    }

}
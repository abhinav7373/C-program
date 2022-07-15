//wap to print all prime no under 100//

#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,count=0;
for(i=1;i<=100;i++){
    for(j=1;j<=100;j++){
         if(i%j==0){
            count=count+1;
        }
    }
        if(count==2){
            printf("%d\t",i);
        }
        count=0;
  }
        
}
          
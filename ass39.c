//wap which takes marks of 5 students(max in each sub. is 100).display result as pass or fail.also print division obtained if candidate has passsed in exam//


#include<stdio.h>
#include<conio.h>
int main(){
     int s1,s2,s3,s4,s5,sum;
     printf("enter sub marks out of 100\n");
     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
     sum=s1+s2+s3+s4+s5;
     sum=sum/5;
     if(sum<33){
        printf("fail");
     }
     else if(sum>33 && sum<=45){
        printf("pass with third division");
     }
     else if(sum>45 && sum<60){
        printf("pass with second division");
     }
     else{
        printf("pass with first division");
     }

    
}
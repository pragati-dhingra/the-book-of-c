#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
   int days=0,month=0,x=0;
  scanf("%d%d",&month,&day);
  
  if(month<1 || month>12 ||day<1 ||day>7){
    printf("-1");
  }else{
     if(month==2){
       x=4;
          printf("%d",x);
     )else{
       if((month==1 || month==3 ||month==5 || month==7 ||month==8 ||month==10 ||month==12))|{
         if(( day==5 || day==6 || day==7)){
           x=5;
           printf("%d",x);
         }else{
           x=4;
           printf("%d",x);
         }
       }else if(day==6 || day==7){
         x=5;
         printf("%d",x);
       }else{
         x=4;
         printf("%d",x);
       }
     }
     }
  return 0;
  }
}
  return 0
}

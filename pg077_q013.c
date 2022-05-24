#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int month;
  scanf("%d",&month);
  if(month==1){
    printf("January");
  }
  else if(month==2){
    printf("Februray");
  }
  else if(month==3){
    printf("March");
  }
   else if(month==4){
    printf("April");
  }
   else if(month==5){
    printf("May");
  }
   else if(month==6){
    printf("June");
  }
   else if(month==7){
    printf("July");
  }
   else if(month==8){
    printf("August");
  }
   else if(month==9){
    printf("September");
  }
   else if(month==10){
    printf("October");
  }
   else if(month==11){
    printf("November");
  }
   else if(month==12){
    printf("December");
  }
  else if(month< 1 || month > 12)
  {
    printf("Invalid");
  }
  
  return 0
}

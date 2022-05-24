#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int a;
  scanf("%d",&a)
  if(a==1) prinf("January");
  else if(a==2) printf("February");
  else if(a==3) printf("March");
  else if(a==4) printf("April");
  else if(a==5) printf("May");
  else if(a==6) printf("June");
  else if(a==7) printf("July");
  else if(a==8) printf("August");
  else if(a==9) printf("September");
  else if(a==10) printf("October");
  else if(a==11) printf("November");
  else if(a==12) printf("December");
  else printf("Invalid");
  
  return 0
}

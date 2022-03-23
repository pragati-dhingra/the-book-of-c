#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int monthno;
  printf("Enter month Number");
  scanf("%d",&monthno);
  if(monthno==1)
  {
  	printf("January");
  }
  else if(monthno==2)
  {
  	printf("February");
  }
   else if(monthno==3)
  {
  	printf("March");
  }
   else if(monthno==4)
  {
  	printf("April");
  }
   else if(monthno==5)
  {
  	printf("May");
  }
   else if(monthno==6)
  {
  	printf("June");
  }
   else if(monthno==7)
  {
  	printf("July");
  }
   else if(monthno==8)
  {
  	printf("August");
  }
  else if(monthno==9)
  {
  	printf("September");
  }
   else if(monthno==10)
  {
  	printf("October");
  }
 else if(monthno==11)
  {
  	printf("November");
  }
   else if(monthno==12)
  {
  	printf("December");
  }
   else
  {
  	printf("Invalid Month");
  }
   
   return 0;
}

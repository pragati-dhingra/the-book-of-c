#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int month = 0;
  scanf("%d",&month);
  if(month == 1)
  {
    printf("jan");
  }
  else if(month == 2)
  {
    printf("feb");
  }
  else if(month == 3)
  {
    printf("march");
  }
  else if(month == 4)
  {
    printf("arpil");
  }
  else if(month == 5)
  {
    printf("may");
  }
  else if(month == 6)
  {
    printf("june");
  }
  else if(month == 7)
  {
    printf("july");
  }
  else if(month == 8)
  {
    printf("aug");
  }
  else if(month == 9)
  {
    printf("sep");
  }
  else if(month == 10)
  {
    printf("oct");
  }
  else if(month == 11)
  {
    printf("nov");
  }
  else if(month == 12)
  {
    printf("dec");
  }
  return 0
}

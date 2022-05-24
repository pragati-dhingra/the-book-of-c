#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int n=0;
  printf("Enter the value ");
  scanf("%d",&n);
  if(n=1)
  {
    printf("january");
   }
  else if(n=2)
  {
    printf("febuary");
  }
  else if(n=3)
  {
    printf("march");
  }
  else if(n=4)
  {
    printf("april");
  }
  else if(n=5)
  {
    printf("may");
  }
  else if(n=6)
  {
    printf("june");
  }
  else if(n=7)
  {
    printf("july");
  }
  else if(n=8)
  {
    printf("august");
  }
  else if(n=9)
  {
    printf("september");
  }
  else if(n=10)
  {
    printf("october");
  }
  else if(n=11)
  {
    printf("november");
  }
  else if(n=12)
  {
    printf("december");
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0
}

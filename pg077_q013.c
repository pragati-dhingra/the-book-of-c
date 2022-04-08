#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int m = 0;
    printf("Input Month No : ");
    scanf("%d", &m);
    if (1==m)
    {
        printf("January");
    }
    else if(2==m)
    {
    
        printf("February");
    }
    else if(3==m)
        printf("March");
        
    else if(4==m)
        printf("April");
    else if(5==m)
        printf("May");
    else if(6==m)
        printf("June");
    else if(7==m)  
        printf("July");
    else if(8==m)    
        printf("August");
    else if(9==m)   
        printf("September");
    else if(10==m)
        printf("October");
    else if(11==m)
        printf("November");
    else if(12==m)
        printf("December");
    else
        printf("Invalid");
        
    
  return 0;
}

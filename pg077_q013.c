#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  
 int num1 = 0, num2 = 0;
    printf("Enter first number ");
    scanf("%d",&num1);
    printf("Enter second number ");
    scanf("%d",&num2);
 
    if(num1 > num2) {
        printf("%d is larger\n", num1);
    }
    if(num2 > num1) {
        printf("%d is larger\n", num2);
    }
    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to print all factors of a number
    * input -> a positive integer
    * Expected output, if number entered is less than 1 print "Invalid input" without quotes
    * If valid input was received then print all factors of that number in increasing order on a single line separated by a single space
    * E,g. input -> 7
    * output -> "1 7 ", without quotes
    * input -> 10
    * output -> "1 2 5 10 ", without quotes
    * Note that there is one space after each number */
int i=1, n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{
    if(n%i==0)
    printf("%d ",i);
  
}
    return 0;
}

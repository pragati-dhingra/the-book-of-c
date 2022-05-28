#include <stdio.h>
int F(int);
int main (int argc, char* argv[] ){
    /* Write a recursive program that:
    * Reads an int n as input, on a line by itself
    * And prints the nth Fibonacci number as output 
    * If input was negative number then 0 should be printed
    * F(0) = 0, F(1) = 1
    * Output is on a line by itself with no trailing whitespace or newline */
     int n = 0;
    
    scanf("%d", &n);
    fflush(stdin);
    
    n=F(n);
    printf("%d", n);
    return 0;
}
int F(int n){
   if(n <= 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (F(n-1) + F(n-2));
   }
}

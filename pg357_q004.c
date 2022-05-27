
#include <stdio.h>
int f(int n){
   if(n >= 1){
      return n*f(n-1);
   }
   else {
      return 1;
   }
}
int main (int argc, char* argv[] ){
    /* Write a recursive program that:
    * Reads an int as input, on a line by itself
    * And prints the factorial of that number as output 
    * If input was 0 or negative number then 0 should be printed
    * Output is printed on a line by itself with no trailing whitespace or newline */
    
    int n = 0;
    
    scanf("%d", &n);
    fflush(stdin);
    n=f(n);
    printf("%d", n);
    
    return 0;
}





    /* Write a recursive program that:
    * Reads an int n as input, on a line by itself
    * And prints the nth Fibonacci number as output 
    * If input was negative number then 0 should be printed
    * F(0) = 0, F(1) = 1
    * Output is on a line by itself with no trailing whitespace or newline */
    
#include <stdio.h>
 
unsigned long int fibonacci(unsigned long n) {
   
    if(0 == n) {
        return 0;
    }
    if(1 == n) {
        return 1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}
 
int main (int argc, char *argv[]) {
    unsigned int n = 0;
    unsigned long result = 0;
 
        scanf("%u", &n);
 if(n<1)
     printf("0");
    if(n==0)
        printf("0");
    if(n>0)
    {   
    result = fibonacci(n);
    printf("F(%u) = %lu\n", n, result);
    }    
             return 0;
}

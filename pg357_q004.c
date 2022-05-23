
    /* Write a recursive program that:
    * Reads an int as input, on a line by itself
    * And prints the factorial of that number as output 
    * If input was 0 or negative number then 0 should be printed
    * Output is printed on a line by itself with no trailing whitespace or newline */

#include <stdio.h>
 
unsigned long int factorial(unsigned long n) {
    if(1 == n) {
        return 1;
    }
    return n * factorial(n-1);
}
 
int main (int argc, char *argv[]) {
    unsigned int num = 0;
    unsigned long result = 0;
 
    printf("Enter a positive number: ");
    scanf("%u", &num);
 
    if(num == 0 ) {
        printf("0");
    } 
    if(num <1){
          printf("0");
    }
    if(num>1)
        {
        
        result = factorial(num);
    }
    printf("%lu",result);
    return 0;
}

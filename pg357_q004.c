int main (int argc, char* argv[] ){
#include<stdio.h>
int factorial(int n);

    /* Write a recursive program that:
    * Reads an int as input, on a line by itself
    * And prints the factorial of that number as output 
    * If input was 0 or negative number then 0 should be printed
    * Output is printed on a line by itself with no trailing whitespace or newline */
int factorial(int n)
{

    if(n == 1) {
        return 1;
    }
    else
    {
    return n * factorial(n-1);
    }
}

int main (int argc, char *argv[]) {
     int num = 0;
     long fact = 0;

    scanf("%d", &num);

    if(num <= 0 ) {
        printf("0");
    } 
    else{

        fact = factorial(num);
         printf("%ld",fact);
    }
    return 0;
}

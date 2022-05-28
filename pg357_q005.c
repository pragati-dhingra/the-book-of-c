#include <stdio.h>


    /* Write a recursive program that:
    * Reads an int n as input, on a line by itself
    * And prints the nth Fibonacci number as output 
    * If input was negative number then 0 should be printed
    * F(0) = 0, F(1) = 1
    * Output is on a line by itself with no trailing whitespace or newline */
    long int fibonacci(long n) {
   
    if(n== 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}
 
int main (int argc, char *argv[]) {
     int n = 0;
    long result = 0;
 	int x=0;
        scanf("%u", &n);
 if(n<0)
     printf("%d",x);
    else{
	
    	result = fibonacci(n);
    	printf("F(%d) = %ld\n", n, result);
    }    

    return 0;
}

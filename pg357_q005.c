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
 
    result = fibonacci(n);
    printf("F(%u) = %lu\n", n, result);
         
             return 0;
}

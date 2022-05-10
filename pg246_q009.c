#include <stdio.h>
void swap(int *a, int *b);
int main (int argc, char * argv[]) {
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a = %d and b = %d", a, b);
    return 0;
}
 /* Write a function that swaps two ints using pointers
    * Input - two integer values on a single line separated by a single space
    * output - two integer values, print the two variables in the same order in which they were read
    * for example, if scanf read in var1 and var2 then printf should print them in same order var1 followed by var2
    * implement a function that swaps these two integers using pointers.
    * Example, input:
    * 5  3
    * output:
    * "3 5" without quotes - no trailing space or newline */
   
void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
 


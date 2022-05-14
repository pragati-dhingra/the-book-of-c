#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads ten floats as input in an array, one float per line
    * 2. Prints the average of the array as output with two decimal places and no trailing spaces or newline 
    * For example: Input 
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * Output:
    * 1.00 */
    float a[10] = {0};
    int ctr = 0;
    float total = 0;
    float avg = 0;
    for (ctr = 0; ctr < 10; ctr++)
    {
        scanf("%f", &a[ctr]);

        total += a[ctr];
    }
    avg= total/10;
    printf("%0.2f", avg);
    return 0;
}

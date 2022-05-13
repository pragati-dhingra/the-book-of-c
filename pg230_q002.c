#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads ten integers as input in an array, one integer per line
    * 2. Prints the maximum number in the array as output with no trailing spaces or newline 
    * For example: Input 
    * 10
    * 89
    * -25
    *  0
    * 190
    * 65
    * -300
    * 90
    * 76
    * 1
    * Output:
    * 190 */
    int a[10] = {0};
    int ctr = 0;
    int max = 0;
    for (ctr = 0; ctr < 10; ctr++)
    {
        scanf("%d", &a[ctr]);
        if (a[ctr] > max)
        {
            max = a[ctr];
        }
    }
    printf("%d", max);
    return 0;
}

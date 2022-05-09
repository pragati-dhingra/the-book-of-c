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
        int arr [] = {0};
 
    /* If we initialize max to 0, program will fail if
     * all elements of array were negative. */
    for(int i=0; i<10 ;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    int max = arr[0];
 
    for(int i=1; i<10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max value in array is %d\n", max);
    return 0;
}
return 0;
}

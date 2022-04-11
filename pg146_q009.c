#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to read an input integer n from user
    * Validate that input should be in the range 1 to 1000 - both inclusive
    * If input is outside of this range then print "Invalid input" and skip rest of processing
    * If input was valid then, using a for loop, print the sum of first n natural numbers on a line by itself with no trailing newline */
    int n=0 , i = 0, sum = 0;
     scanf("%d", &n);
    if (n<0||n>1001)  {
        printf("Invalid input");
    } else {
        for (i=1;i<=n;i++) {
            sum=sum+i;
        }
        printf("%d",sum);
    }

    return 0;
}

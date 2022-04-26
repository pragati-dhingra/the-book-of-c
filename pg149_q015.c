#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that read an input integer from user
    * and prints the number of digits in that number on a line by itself with no trailing  newline
    * E.g. if input was 25089 then output should be 5 */
int n=0, count=0;
    scanf("%d", &n);

    if (n>0)
        prinftf("%d", count);
    else
    {
        while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    printf("%d",count);
    }
    return 0;
}

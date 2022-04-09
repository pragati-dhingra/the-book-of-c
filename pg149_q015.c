#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that read an input integer from user
    * and prints the number of digits in that number on a line by itself with no trailing  newline
    * E.g. if input was 25089 then output should be 5 */

       int n = 0, d = 0, count = 0;
    scanf("%d", &n);
    if(n==0)
    {
        printf("1");
    }
    else
    {
        d = n;
        while (d != 0)
        {
            count++;
            d = n / 10;
            n = d;
        }
        printf("%d", count);
    }
    return 0;
}

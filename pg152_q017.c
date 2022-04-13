#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to determine if a given input is a perfect square or not
    * User input would be a single integer
    * If user input was a perfect square then print Yes else print No on a line by itself with no trailing newline
    * Output is case sensitive
    * E.g. 
    * 4
    * Yes */

       int a=0, n=0,count=0;
    scanf("%d", &n);
    for (a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            count++; 
        }
    }
    if (count == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

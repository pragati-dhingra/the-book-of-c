#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to determine if a given input is a perfect square or not
    * User input would be a single integer
    * If user input was a perfect square then print Yes else print No on a line by itself with no trailing newline
    * Output is case sensitive
    * E.g. 
    * 4
    * Yes */
int i, n;
        scanf("%d", &n);
    for(i = 0; i <= n; i++)
    {
        if (n == i * i)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to print table of 7 using do while loop
    * Expected output is "7 14 21 28 35 42 49 56 63 70 " without quotes.
    * Note that there is one space after each number */
int i=1, p=0;
    do
{
    p=7*i;
    printf("%d ",p);
        i++;
} while(i<=10);
    return 0;
}

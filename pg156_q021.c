#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to print table of 7 using do while loop
    * Expected output is "7 14 21 28 35 42 49 56 63 70 " without quotes.
    * Note that there is one space after each number */
int i=1;

    do {
        printf("%d ",7*i);
        i++;
    }while(i<=10);
    return 0;
}

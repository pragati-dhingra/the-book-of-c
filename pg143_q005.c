#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Print squares of first 10 natural numbers using a for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "1 4 9 16 25 36 49 64 81 100 " without quotes.
    * Note there is one space character after each number */
    int i=0;
    for(i=1;i<=10;i++)
        printf("%d ",i*i);

    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Print first 5 fibonacci numbers using for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "0 1 1 2 3 " without quotes. Note there is one space character after each number */

    int i,nextTerm;
    int t1 = -1, t2 = 1; 
    for (i = 1; i <= 5; i++) {
        nextTerm=t1+t2;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

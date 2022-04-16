#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Print first 5 fibonacci numbers using for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "0 1 1 2 3 " without quotes. Note there is one space character after each number */
int f0 = 0, f1 = 1, f = 0, i = 0;
     printf("%d %d ", f0, f1);
     for(i=0; i<3; i++) {
        f = f0 + f1;
        printf("%d ", f);
        f0 = f1;
        f1 = f;
    }

    return 0;
}

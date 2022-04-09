#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Print first 5 fibonacci numbers using for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "0 1 1 2 3 " without quotes. Note there is one space character after each number */

    int a=0, b=1, c=0, i=0;
    printf("%d %d ",a,b);
    for(i=0;i<3;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}

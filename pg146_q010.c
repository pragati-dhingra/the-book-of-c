#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Print first 5 fibonacci numbers using for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "0 1 1 2 3 " without quotes. Note there is one space character after each number */
    int i=0,f1=0,f2=1,f3=0;
    printf("%d %d",f1,f2);
    for(i=1;i<=3;i++)
    {
        f3=f1+f2;
        printf(" %d",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}

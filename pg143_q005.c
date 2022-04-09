#include <stdio.h>

int main (int argc, char* argv[] ){
     int num=1,ans=0;
    /* Print squares of first 10 natural numbers using a for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "1 4 9 16 25 36 49 64 81 100 " without quotes.
    * Note there is one space character after each number */
    for(num=1;num<=10;num++)
    {
    ans=num*num;
    printf("%d ",ans);
    }
    return 0;
}

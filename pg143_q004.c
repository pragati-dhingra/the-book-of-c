#include <stdio.h>

int main (int argc, char* argv[] ){
    int num=0;
    /* Print table of 2 using a for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "2 4 6 8 10 12 14 16 18 20 " without quotes. 
    * Note there is one space character after each number */
    for(num=2;num<=20;num=num+2)
    {
        printf("%d ",&num);
    }   
    return 0;
}

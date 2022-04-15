#include <stdio.h>

int main (int argc, char* argv[] ){
    
    int i,j;
    for (i=1;i<=10;i++){
    j=i*2;
    printf("%d ",j );
    }
    /* Print table of 2 using a for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "2 4 6 8 10 12 14 16 18 20 " without quotes. 
    * Note there is one space character after each number */

    return 0;
}

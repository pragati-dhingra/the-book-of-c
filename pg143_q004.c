#include <stdio.h>
int main (int argc, char* argv[] ){
    /* Print table of 2 using a for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "2 4 6 8 10 12 14 16 18 20 " without quotes. 
    * Note there is one space character after each number */
    int i=1, mul=0;
    for(; i<=10; i++){
    	mul=2*i;
        printf("%d ", mul);
    }
 return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that read an input integer from user
    * and prints the number of digits in that number on a line by itself with no trailing  newline
    * E.g. if input was 25089 then output should be 5 */
    long  number=0;
    int count=0;
    scanf("%ld",&number);
    do
    {
        number /= 10;
        count++;
    }while(number!=0);
    printf("%d",count);
    return 0;
    
}

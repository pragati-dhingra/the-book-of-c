#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that read an input integer from user
    * and prints the number of digits in that number on a line by itself with no trailing  newline
    * E.g. if input was 25089 then output should be 5 */
    int num=0,c=0;
    scanf("%d",&num);
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    printf("%d",c);
    return 0;
}

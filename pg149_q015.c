#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that read an input integer from user
    * and prints the number of digits in that number on a line by itself with no trailing  newline
    * E.g. if input was 25089 then output should be 5 */
    int num = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (0 == num) {
        digits = 1;
    } else {
        while(num) {
            num /= 10;
            digits++;
        }
    }
    printf("%d", digits);
    return 0;
}


#include <stdio.h>
int main (int argc, char* argv[] ){
    /* Write a program that reads in a string terminated by newline from the user
    * and prints the number of non-alphabet characters in the string - on a line by itself with no trailing newline
    * For example, input:
    * I am level 7 Ninja
    * Output
    * 5
    * Assume string length would be <30 (array size). Guard against longer input strings. 
    * If user inputs a longer string then only first 29 characters should be processed
    */
    char str[31] = { '\0' };
    int count=0;

    scanf("%30[^\n]s",str);

    for(int i=0; i<29 && str[i]; i++) {
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that reads in a string terminated by newline from the user
    * and prints the same string in uppercase without trailing newline
    * non-alphabet characters and uppercase input should be printed as is
    * For example, input:
    * I am level 7 Ninja
    * Output
    * I AM LEVEL 7 NINJA
    * Assume string length would be <128
    */
    char str[31] = { '\0' };
    int count=0;
 
   
    scanf("%30[^\n]s",str);
 
    for(int i=0; i<29 && str[i]; i++) {
        if(str[i]>='a' && str[i]<='z') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

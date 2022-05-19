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
 
    printf("Enter a string (up to 30 characters) : ");
    scanf("%30[^\n]s",str);
 
    for(int i=0; i<31 && str[i]; i++) {
        if(str[i]>='a' && str[i]<='z') {
            printf("%c",str[i]-'a'+'A');
        } else {
            printf("%c",str[i]);
        }
    }
}
    return 0;
}

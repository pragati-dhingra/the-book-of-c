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
    char str[128] = { '\0' };

   char str[128] = { '\0' };

    printf("Enter a string (up to 30 characters) : ");
    scanf("%127[^\n]s",str);

    for(int i=0; i<127 && str[i]; i++) {
@@ -22,6 +22,5 @@ int main (int argc, char* argv[] ){
            printf("%c",str[i]);
        }
    }
}
    return 0;
	return 0;
}

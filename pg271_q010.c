#include <stdio.h>

char * my_strcpy (char *dest, const char *src);
int main (int argc, char* argv[] ){
    /* Write an implementation of strcpy using while loop. 
    * Your program reads a string on a line by itself, terminated by \n
    * and calls a function that copies this string into destination string. The destination string is passed as a parameter by calling function
    * Function should return pointer to destination string
    * Function is expected to copy all chars until \0.
    * Buffer overflow check is not expected.
    * Use while loop for copying 
    * Do not use library strcpy function
    * Returned string is printed by the calling function
    * Assume max string size of 32 chars including \0 */
    const char str1[31]={'\0'};
    char str2[31]={'\0'};
    
    scanf(" %30[^\n]s",str1);
     
	my_strcpy(str2,str1);
	  
	printf("%s",str2);
    return 0;
}

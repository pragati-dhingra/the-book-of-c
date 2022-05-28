#include <stdio.h>
char * my_strcpy (char *dest,  char *src);
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
    
    char str_src[32]={'\0'};
    char str_dest[32]={'\0'};
    char *ptr =NULL;
    
    scanf("%31[^\n]s",str_src);
    
    ptr = my_strcpy(str_dest,str_src);
    
    printf("%s",str_dest);
    
    return 0;
}

char * my_strcpy (char *dest,  char *src) {
    int i = 0;
 
    /*Loop terminates when end of src string is reached*/
    while(src[i] !='\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; /*Terminate dest with null byte*/
    return dest;
}
 

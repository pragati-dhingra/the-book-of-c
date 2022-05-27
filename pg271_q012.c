#include <stdio.h>
char *my_strncpy (char *dest, const char *src, unsigned int n);

int main (int argc, char* argv[] ){
    /* Write an implementation of strncpy using while loop. 
    * Your program reads a int on a line by itself. This is the max number of chars to copy.
    * Followed by a string on a line by itself, terminated by \n
    * and calls a function that copies this string into destination string. The destination string is passed as a parameter by calling function
    * Function should return pointer to destination string
    * Function is expected to copy all chars until \0.
    * Buffer overflow check is not expected.
    * At most n chars should be copied where n was the number input by user
    * Returned string is printed by the calling function
    * Assume max string size of 32 chars including \0
    * Include error checks for n, 0<n<32
    * If input value was outside this range then skip the call to strncpy function and print -1
    * Note that input string would still be read in this case
    * Do not use strncpy library function
    * If source string had less than n chars then simply copy up to terminating \0  */
    unsigned int n=0;
    const char str1[31]={'\0'};
    char str2[31]={'\0'};
    int x=-1;
    
    scanf("%d",&n);  
  
       
    if(n>0 && n<32){
    scanf(" %30[^\n]s",str1);	
    my_strncpy(str2,str1,n);
    printf("%s",str2);
	}else{
		printf("%d",x);
	}
    return 0;
}

char *my_strncpy (char *dest, const char *src, unsigned int n) {
    int i = 0;
    for(;i<n && src[i]; i++) {
        dest[i] = src[i];
    }
    return dest;
}
    return 0;
}

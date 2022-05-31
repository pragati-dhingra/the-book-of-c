#include <stdio.h>

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write an implementation of strncmp. 
    * Your program reads an int on a line by itself - this is the max number of chars to compare
    * Followed by string 1 on a line by itself, terminated by \n
    * Followed by string 2 on a line by itself, terminated by \n
    * and calls a function that prints
    * 0 if at most first n chars of both strings were equal
    * -1 if string 1 was smaller while comparing first n chars
    *  1 if  string 1 was bigger while comparing first n chars
    * notion of big or small is same as standard library strncmp function
    * do not use library strncmp function 
    * assume that input strings are <30 chars
    * If longer string is presented as input, use only first 29 chars
    * Include error checks for the value of n. It should be >0 and <30 
    * If value of n is outside this range then print output value as -2 instead of above values */
    int n=7;
    const char str1[30]={'\0'};
    const char str2[30]={'\0'};
    int x=-2;
    
    scanf("%d",&n);  
    
	scanf(" %30[^\n]s",str1);
    scanf(" %30[^\n]s",str2);
    
    
    if(n>0 && n<30){
    	
    	printf("%d",my_strncmp(str1,str2,n));
	}else{
		printf("%d",x);
	}
       
    return 0;
}
int my_strncmp (const char * s1, const char * s2, int n) {
    int count = 0;
    while ( (*s1 != '\0') && (*s1 == *s2) && count != n-1) {
        s1++;
        s2++;
        count++;
    }
    if (*s1-*s2==0){
    	return 0;
	}else if(*s1>*s2){
		return 1;
	}else{
		return -1;
	}		
	
}

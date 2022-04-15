#include <stdio.h>

int main (int argc, char* argv[] ){
    int i,j=0, n;
    scanf("%d",&n);
    if(n<1 || n>1000){
    printf("Invalid input");
    return 0;
    }
    for(i=1;i<=n;i++){
    j=j+i;
    printf("%d",j);
    }
    
    /* Write a program to read an input integer n from user
    * Validate that input should be in the range 1 to 1000 - both inclusive
    * If input is outside of this range then print "Invalid input" and skip rest of processing
    * If input was valid then, using a for loop, print the sum of first n natural numbers on a line by itself with no trailing newline */

    return 0;
}

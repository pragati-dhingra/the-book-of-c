#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to determine if a given input is a perfect square or not
    * User input would be a single integer
    * If user input was a perfect square then print Yes else print No on a line by itself with no trailing newline
    * Output is case sensitive
    * E.g. 
    * 4
    * Yes */
    int num = 0, i = 0;
 
    scanf("%d", &num);
 
    
        while (i*i <= num)
        {
            if(i*i == num) {
                 printf("Yes");
                 break;
            }
            i++;
        }
            if(num != i*i)
            {
                printf("No");
            }
         
         
    return 0;
}

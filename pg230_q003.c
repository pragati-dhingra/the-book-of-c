#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads ten floats as input in an array, one float per line
    * 2. Prints the average of the array as output with two decimal places and no trailing spaces or newline 
    * For example: Input 
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * 1
    * Output:
    * 1.00 */
   int main(void) {
 int i; 
  float ave, a[10], sum=0;
        for(i=0;i<9;i++)
        scanf("%f\n",&a[i]);
       for(i=0;i<10;i++)
           sum=sum+a[i];
  ave=sum/10;
           printf("%.2f",ave);

    return 0;
}

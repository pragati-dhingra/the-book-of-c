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
   float a[10] = {0};
	    float average = 0.0;
	    for(int i=0; i<10; i++) 
	    {
	        scanf("%f",&a[i]);
	    }
	    
	      for(i=0; i<10; i++) 
	      {
	        average += a[i];
	    }
	    average /= 10;
	    printf("Average of array is %0.2f", average);
	    


    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
      
    /* Write a program to read an input integer n from user
    * Validate that input should be in the range 1 to 1000 - both inclusive
    * If input is outside of this range then print "Invalid input" and skip rest of processing
    * If input was valid then, using a for loop, print the sum of first n natural numbers on a line by itself with no trailing newline */
    int num, i, sum = 0; // declare local variables  
    printf(" Enter a positive number: ");  
    scanf("%d", &num); // take any positive number  
    // executes until the condition remains true. 
    if(num<0 || num>=1000)
    {
        printf("Invalid Input");
        exit(0);
    }    
    else
    {
        for (i = 0; i <= num; i++)  
    {  
        sum = sum + i; // at each iteration the value of i is added to the sum variable  
    }
    }
    // display the sum of natural number  
    printf("\n Sum of the first %d number is: %d", num, sum);   
    getch();  
    
    return 0;
}

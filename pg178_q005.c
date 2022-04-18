#include <stdio.h>

   int max11(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    return num2;
}
 
int max(int num1, int num2, int num3) {
    int higher = 0;
    higher = max11(num1, num2);
    higher = max11(num3, higher);
    return higher;
}
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line separated by single space character.
    * 2. Defines a function named max to return higher of two integer parameters. 
    * 3. Determines max of 3 input integers by using this max function
    * 4. Prints the highest of 3 input integers as output on a line by itself with no trailing space or newline
    * E.g. Input ->  -10 0 10
    * Output -> 10
    */
	int num1=0,num2=0,num3=0;
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("%d",max(num1,num2,num3));
	return 0;
}	

	
   

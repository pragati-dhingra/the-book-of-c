#include <stdio.h>


    /* Write a function that takes an int as input parameter and an int * as output parameter. 
    * Assuming input int was n
    * Function should return sum of first n natural number
    * Function should update output parameter to square of n 
    * Calling function should simply print the returned value and output parameter value post function call
    * Example, input:
    * 5
    * output:
    * "15 25" without quotes - no trailing space or newline 
    * assume all inputs will be positive numbers */
    
int sum_and_square(int val, int *sum) {
    *sum = (val * (val+1))/2;
    return val*val;
}
 int main (int argc, char * argv[]) {
 	int n=0,x=0;
	 int *sum=&n;
 	scanf("%d",&n);
 	x=sum_and_square(n,sum);
 	printf("%d",*sum);
 	printf(" %d",x);
  	return 0;
  } 
    

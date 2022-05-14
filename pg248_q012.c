#include <stdio.h>
int sum_and_square(int val, int *sum) {
    *sum = (val * (val+1))/2;
    printf("%d",*sum);
    return val*val;
}
int main (int argc, char* argv[] ){
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
    int a=0, sum=0, b=0;
    scanf("%d",&a);
    b=sum_and_square(a,&sum);
    printf(" %d",b);
	return 0;
}

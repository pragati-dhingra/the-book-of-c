#include <stdio.h>
int sum_square(int, int *);

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
    int n = 0,output=0,sum=0;
    scanf("%d",&n);
    sum = sum_square(n,&output);
    printf("%d %d",sum,output);
    return 0;
}

int sum_square(int n,int *output)
{
    *output = n * n;
    return (n*(n+1)/2);
    
}

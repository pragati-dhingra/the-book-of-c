#include <stdio.h>


    /* Write a function that takes an int pointer as argument and updates the value at that location to next highest perfect square.
    * If input number was perfect square then it should remain unchanged
    * Program input - an int on a single line, no trailing spaces
    * function is called with address of this input int 
    * Value of same variable is printed after function call
    * Example, input:
    * 5
    * output:
    * "9" without quotes - no trailing space or newline 
    * assume all inputs will be positive numbers */
    int next_highest_perfect_square(int val) {
    int i = 1;
    while(i*i <= val) {
        i++;
    }
    return i*i;
    }
 
    void update_val(int *a) {
    *a = next_highest_perfect_square(*a);
    printf("%d",*a);
    }

    int main (int argc, char* argv[] )
    {
	int val=0;
	scanf("%d",&val);
	update_val(&val);
	return 0;
    }

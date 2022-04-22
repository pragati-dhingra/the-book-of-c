#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line
    * 2. Invoke a function named average to compute  average of three numbers. The function should return the average value
    * 3. Receives the returned average value in main and prints it on a line by itself with two decimal points and no trailing newline
    * E.g. Input ->  6 10 20
    * Output -> 12.00

	int n1,n2,n3;
	void average (int a, int b, int c);
	
	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	average(n1,n2,n3);
	
}
void average (int a, int b, int c)
{
	float average;
	average=(a+b+c)/3.0;
	printf("Average=%.2f",average);
}

    return 0;
}

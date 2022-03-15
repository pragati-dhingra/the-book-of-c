#include <stdio.h>

int main(int argc, char * argv[])
	{
	int num1 = 0, num2 = 0;
	printf("Enter first number");
	scanf("%d", &num1);
	printf("Enter 2nd number");
	scanf("%d", &num2);
	
	if(num1==num2)
	{
	printf("Both the numbers are equal\n");
	}
	if(num1!=num2)
	{
	printf("Both the numbers are not equal\n");
	}
	return 0;
	}

#include <stdio.h>

int main(int argc, char * argv[]){
	int num=0;
	printf("Enter a number ");
	scanf("%d", &num);
	
		if(num % 2 == 0)
		{
			printf("Number is even \n");
		}
		if(num % 2 != 0)
		{
			printf("Number is odd \n");
		}
		return 0;
	}

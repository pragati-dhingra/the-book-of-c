#include <stdio.h>

int main(int argc, char * argv[]){
	int num=0;
	printf("Enter a non zero numner");
	scanf("%d", &num);
	
	if(num%7==0){
		printf("Number is a multiple of 7\n");
		}else{
			printf("Number is not a multiple of 7 \n");
		}
		return 0;
	}

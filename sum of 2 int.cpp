#include<stdio.h>
#include<conio.h>
int main(int arg, char * argv[]){
	int a=0, b=0;
 	printf("Enter the number:");
	scanf("%d",&a);
	b=a%7;
	if(b==0){
 		printf("a is a multiple of 7");
	}
	else{
 		printf("a is not a multiple of 7");
	}
return 0;
}

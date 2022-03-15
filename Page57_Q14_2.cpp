#include<stdio.h>
#include<conio.h>
int main(int arg, char * argv[]){
	double num1=0, num2=0, num3=0, temp=0;
 	printf("Enter 1st number:");
	scanf("%lf",&num1);
	printf("Enter 2nd number:");
	scanf("%lf",&num2);
	printf("Enter 3rd number:");
	scanf("%lf",&num3);
	if(num1>num2){
		temp=num1;
	}
	if(num2>num1){
		temp=num2;
	}
	if(num3>temp){
		temp=num3;
	}
 	printf("The largest number is %f",temp);	
	return 0;
}

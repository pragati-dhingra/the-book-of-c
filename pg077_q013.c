#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  #include<stdio.h>

int main(int argc,char * argv[] ){
	int month=0;
	printf("Enter Month Number:");
	scanf("%d",&month);
	
	if(month==1){
		printf("January\n");
	}
	if(month==2){
		printf("Febraury\n");
	}
	if(month==3){
		printf("March\n");
	}
	if(month==4){
		printf("April");
	}
	if(month==5){
		printf("May");
	}
	if(month==6){
		printf("June");
	}
	if(month==7){
		printf("July");
	}
	if(month==8){
		printf("August");
	}
	if(month==9){
		printf("September");
	}
	if(month==10){
		printf("October");
	}
	if(month==11){
		printf("November");
	}
	if(month==12){
		printf("December");
	}
	if(month < 1 ) {
        printf("Invalid");
    }
    if(month > 12 ) {
        printf("Invalid");
    }
    return 0;
}


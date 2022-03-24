#include <stdio.h>

int main (int argc, char* argv[] ){
int month;
printf("\nInput a number between 1 to 12 to get the month name: ");
scanf("%d", &month);
switch(month) {
		case 1 : printf("January\n"); break;
		case 2 : printf("February\n"); break;
		case 3 : printf("March\n"); break;
		case 4 : printf("April\n"); break;
		case 5 : printf("May\n"); break;
		case 6 : printf("June\n"); break;
		case 7 : printf("July\n"); break;
		case 8 : printf("August\n"); break;
		case 9 : printf("September\n"); break;
		case 10 : printf("October\n"); break;
		case 11 : printf("November\n"); break;
		case 12 : printf("December\n"); break;
		default : printf("Input a number between 1 to 12.");
	}
	
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  
  return 0;
}

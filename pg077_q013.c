#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  
  	int mon_num;
//	printf("Enter the month number\n");
	scanf("%d", &mon_num);
	if (mon_num == 1)
		printf("January");
	else if (mon_num == 2)
		printf("February");
	else if (mon_num == 3)
		printf("March");
	else if (mon_num == 4)
		printf("April");
	else if (mon_num == 5)
		printf("May");
	else if (mon_num == 6)
		printf("June");
	else if (mon_num == 7)
		printf("July");
	else if (mon_num == 8)
		printf("August");
	else if (mon_num == 9)
		printf("September");
	else if (mon_num == 10)
		printf("October");
	else if (mon_num == 11)
		printf("November");
	else if (mon_num == 12)
		printf("December");
	else if (mon_num < 1)
		printf("Invalid");
	else if (mon_num > 12)
		printf("Invalid");

  return 0;
}

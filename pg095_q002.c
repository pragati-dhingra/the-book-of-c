#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program using switch case that takes day of the week (1-7) as user input and prints the name of the day.
  * E.g. Monday for 1, Tuesday for 2, and so on. 
  * In case user input is outside the range 1-7, program should print an error message using default case. 
  * Input: one integer value. You are not expected to check for non-integer values.
  * Output: One of the following depending on input value
  *         Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Incorrect input 
  * Note that output is case sensitive */
  int day_of_week=0;
	printf("Enter the day of week in number\n");
	scanf("%d", &day_of_week);
	switch (day_of_week)
	{
	case 1: printf("\nMonday");
		break;
	case 2: printf("\nTuesday");
		break;
	case 3: printf("\nWednesday");
		break;
	case 4: printf("\nThursday");
		break;
	case 5: printf("\nFriday");
		break;
	case 6: printf("\nSaturday");
		break;
	case 7: printf("\nSunday");
		break;
	default: printf("\nIncorrect input");
		break;
	}
	
  return 0;
}

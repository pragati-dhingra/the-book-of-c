#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program using switch case that takes day of the week (1-7) as user input and prints the name of the day.
  * E.g. Monday for 1, Tuesday for 2, and so on. 
  * In case user input is outside the range 1-7, program should print an error message using default case. 
  * Input: one integer value. You are not expected to check for non-integer values.
  * Output: One of the following depending on input value
  *         Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Incorrect input 
  * Note that output is case sensitive */
  int day;
  printf("Please enter day:");
  scanf("%d", &day);	
  switch(day){
     case 1: printf("Monday");
         break;
     case 2: printf("Tuesday");
         break;
	   case 3: printf("Wednesday");
         break;
	   case 4: printf("Thursday");
         break; 
     case 5: printf("Friday");
         break;
     case 6: printf("Saturday");
         break;
     case 7: printf("Sunday");
         break;
     default: printf("Enterred day is incorrect");	
  }
  return 0;
}

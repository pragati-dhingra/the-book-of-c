#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write program that reads the month and first day of the month (1 for Monday, 2 for Tuesday, and so on)
  from the user and prints the number of Sundays in that month.
  Input: two integers on a single line separated by one space, e.g. 4 6
          First integer is month, 1 for Jan, 2 for Feb, ... 12 for Jan
          Second integer is day of week, 1 for Monday, 2 for Tuesday ...
  Output: One integer showing number of sundays in that month. No newline to be printed
          In case of invalid input, print -1 as output */
  int day=0;
  scanf("%d",&day);
  switch(day)
  {
    case 1: printf("Monday");
      break;
    case 2:printf("Tuesday");
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
    default:printf("Incorrect input");
  }
  return 0;
}
      
      
  
  return 0
}

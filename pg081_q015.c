#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write program that reads the month and first day of the month (1 for Monday, 2 for Tuesday, and so on)
  from the user and prints the number of Sundays in that month.
  Input: two integers on a single line separated by one space, e.g. 4 6
          First integer is month, 1 for Jan, 2 for Feb, ... 12 for Jan
          Second integer is day of week, 1 for Monday, 2 for Tuesday ...
  Output: One integer showing number of sundays in that month. No newline to be printed
          In case of invalid input, print -1 as output */
 int month = 0, date = 0, day = 0;
 
    printf("Enter the current month between 1 to 12: ");
    scanf("%d", &month);
    printf("Enter  day of month between 1 to 7: ");
    scanf("%d", &day);
 
    if ( month < 1 || month > 12 || day < 1 || day > 7) {
        printf("-1\n");
    } else {
        if (2 == month) {
            printf("Month has 4 Sundays\n");
        } else {
            if ((1 == month|| 3 == month|| 5 == month|| 7 == month ||
                8 == month || 10 == month || 12 == month)&&(5==day ||6==day||7==day)) {
                 
                    printf("This Month has 5 Sundays\n");
                
                }
            } else if (6 == day || 7 == day) {
                printf("This Month has 5 Sundays\n");
            } else {
                printf("This Month has 4 Sundays\n");
            }
        }
    }
    
return 0;
}


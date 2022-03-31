#include <stdio.h>

int main (int argc, char* argv[] ){
 int month = 0, date = 0, day = 0;
 
    printf("Enter the current month (1-12): ");
    scanf("%d", &month);
    printf("Enter first day of month (1-7): ");
    scanf("%d", &day);
 
    if ( month < 1 || month > 12 || day < 1 || day > 7) {
        printf("Invalid input\n");
    } else {
        if (2 == month) {
            printf("Month has 4 Sundays\n");
        } else {
            if ((1 == month|| 3 == month|| 5 == month|| 7 == month ||
                8 == month || 10 == month || 12 == month)) {
                if((5 == day || 6 == day || 7 == day)) {
                    printf("Month has 5 Sundays\n");
                } else {
                    printf("Month has 4 Sundays\n");
                }
            } else if (6 == day || 7 == day) {
                printf("Month has 5 Sundays\n");
            } else {
                printf("Month has 4 Sundays\n");
            }
        }
    }
    printf("Good Bye!\n");
  return 0
}

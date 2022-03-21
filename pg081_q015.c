#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write program that reads the month and first day of the month (1 for Monday, 2 for Tuesday, and so on)
  from the user and prints the number of Sundays in that month.
  Input: two integers on a single line separated by one space, e.g. 4 6
          First integer is month, 1 for Jan, 2 for Feb, ... 12 for Jan
          Second integer is day of week, 1 for Monday, 2 for Tuesday ...
  Output: One integer showing number of sundays in that month. No newline to be printed
          In case of invalid input, print -1 as output */
    int month = 0;
 
    printf("Enter Month: ");
    scanf("%d", &month);
 
    if(month < 1 || month > 12) {
        printf("Invalid input\n");
    } else if(month == 1){
        printf("January\n");
    }else if(month == 2){
        printf("February\n");
    }else if(month == 3){
        printf("March\n");
    }else if(month == 4){
        printf("April\n");
    }else if(month == 5){
        printf("May\n");
    }else if(month == 6){
        printf("June\n");
    }else if(month == 7){
        printf("July\n");
    }else if(month == 8){
        printf("August\n");
    }else if(month == 9){
        printf("September\n");
    }else if(month == 10){
        printf("October\n");
    }else if(month == 11){
        printf("November\n");
    }else if(month == 12){
        printf("December\n");
    }
 
    return 0;
}
  
 

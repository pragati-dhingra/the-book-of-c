#include <stdio.h>

int main (int argc, char* argv[] ){
 int month = 0;
 
    printf("Enter month: ");
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
  return 0
}

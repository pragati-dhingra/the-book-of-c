#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a read a positive number n from the user  and print nth prime number
    * If user entered a value less than 1 or more than 100 then print "Invalid input" without quotes
    * For valid input, print nth prime number on a line by itself with no trailing newline
    * E.g. input -> 1 
    * output -> 2
    * input -> 9
    * output -> 23 */
#include <stdio.h>
 
int main (int argc, char * argv[]) {
    int nth = 0, num = 2, count = 0, i = 0;
    printf("Enter a number (1-100) ");
    scanf("%d", &nth);
 
    if(nth < 1 || nth > 100) {
        printf("Invalid input");
    } else {
        do {
            for(i=2; i<=num/2; i++) {
                if(num%i == 0) {
                   break;
                }
            }
            if(i>num/2) {
                count++;
            }
            if (count == nth) {
                printf("%dth prime nunmber is %d",nth, num);
                break;
            }
            num++;
        } while(1);
    }
    return 0;
}

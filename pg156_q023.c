#include <stdio.h>
int is_prime(int val);
int is_sum_of_prime(int val);

int main (int argc, char* argv[] ){
    /* Write a program to print all factors of a number
    * input -> a positive integer
    * Expected output, if number entered is less than 1 print "Invalid input" without quotes
    * If valid input was received then print all factors of that number in increasing order on a single line separated by a single space
    * E,g. input -> 7
    * output -> "1 7 ", without quotes
    * input -> 10
    * output -> "1 2 5 10 ", without quotes
    * Note that there is one space after each number */

    int val=0, flag=0;
   scanf("%d",&val);
   if(val<1){
   	printf("Invalid input");
   }
   else{
   	flag=is_sum_of_prime(val);
   	if(flag==0){
	printf("no");  
	}
   	else{
   		printf("yes");
	   }
   }
    return 0;
}
int is_prime(int val) {
    int i=0;
 
    for(i=2; i<=val/2; i++) {
        if (val%i== 0) {
            return 0;
        }
    }
 
    return 1;
}
 
int is_sum_of_prime(int val) {
    int i=0;
    for(i=2; i<=val/2; i++) {
        if(is_prime(i)) {
            if(is_prime(val-i)) {
                return i;
            }
        }
    }
 
    return 0;
}

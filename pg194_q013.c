#include <stdio.h>
int is_prime(int val);
int is_sum_of_prime(int val);
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a natural number as input (1, 2, 3 …)
    * 2. If input was not a natural number then print "Invalid input" - without quotes with no trailing newline
    * 3. Define a function is_sum_of_primes() that determines if a number can be expressed as sum of prime numbers
    * 4. Call is_sum_of_primes from main with the user input 
    * 5. In main, use the returned value to print "yes" if number is a sum of prime numbers else print "no" - no trailing newline */
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

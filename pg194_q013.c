#include <stdio.h>
int sum_of_two_primes(int n);
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a natural number as input (1, 2, 3 …)
    * 2. If input was not a natural number then print "Invalid input" - without quotes with no trailing newline
    * 3. Define a function is_sum_of_primes() that determines if a number can be expressed as sum of prime numbers
    * 4. Call is_sum_of_primes from main with the user input 
    * 5. In main, use the returned value to print "yes" if number is a sum of prime numbers else print "no" - no trailing newline */
int n=0, i=0;
printf("Enter the number: ");
scanf("%d", &n);
int flag = 0;
for(i = 2; i <= n/2; ++i)
{
if (sum_of_two_primes(i) == 1)
{
if (sum_of_two_primes(n-i) == 1)
{
printf("yes");
flag = 1;
}
}
}
if (flag == 0)
printf("no");
return 0;
}


int sum_of_two_primes(int n)
{
int i, isPrime = 1;
for(i = 2; i <= n/2; ++i)
{
if(n % i == 0)
{
isPrime = 0;
break;
}
}
return isPrime;
}


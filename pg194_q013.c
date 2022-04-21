#include <stdio.h>

int is_sum_of_primes(int);
int is_prime(int);

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a natural number as input (1, 2, 3 …)
    * 2. If input was not a natural number then print "Invalid input" - without quotes with no trailing newline
    * 3. Define a function is_sum_of_primes() that determines if a number can be expressed as sum of prime numbers
    * 4. Call is_sum_of_primes from main with the user input 
    * 5. In main, use the returned value to print "yes" if number is a sum of prime numbers else print "no" - no trailing newline */
    int num = 0, flag=0;

    scanf("%d", &num);
    
    if(num<1)
    {
        printf("Invalid input");
    }
    
    else
    {
    
    flag = is_sum_of_primes(num);
    
    if(flag==0)
    printf("no");
    else
    printf("yes");
    }
    return 0;
}


int is_sum_of_primes(int num)
{ 
    int i=0;
    
    for(i=2; i<=num/2; i++) 
    {
        if(is_prime(i))
        {
            if(is_prime(num-i))
            {
                return 1;
            }
        }
    }
                return 0;
}

int is_prime(int num)
{
    int i=0;
 
    for(i=2; i<=num/2; i++) {
        if (num%i== 0) {
            return 0;
        }
    }
 
    return 1;
}
}

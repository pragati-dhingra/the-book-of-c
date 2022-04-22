#include <stdio.h>
int is_prime(int num) {
    int i=0;
 
    for(i=2; i<=num/2; i++) {
        if (num%i== 0) {
            return 0;
        }
    }
 
    return 1;
}
int is_sum_of_prime(int num) {
    int i=0;
    for(i=2; i<=num/2; i++) {
        if(is_prime(i)) {
            if(is_prime(num-i)) {
                return i;
            }
        }
    }
 
    return 0;
}
int main (int argc, char* argv[] ){
         int num = 0, prime=0;
 
    
    scanf("%d", &num);
 
    if (num < 1) {
        printf("Invalid input");
    }
   
   else
   {
    prime = is_sum_of_prime(num);
        if (prime==0) {
            printf("no");
            
        }
     else {
        
    
        printf("yes");
    }
   }
    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    long long int phone_memory = 8589934592;
    long long int memory_used = 0;
    double percent_used = 0;

    scanf("%lld", &memory_used);
    /* Add check: if user input was less than 0 or it was more than phone_memory then print "Invalid input" */
    /* In case of invalid input, rest of processing should be skipped */
  
   if (memory_used < 0 || memory_used > phone_memory) 
   {
       printf("Invalid input");
       return 0;
    } 
    else 
    {
        percent_used = (memory_used*100.0)/phone_memory;
        if (percent_used > 90) 
        {
            printf("Running out of storage, cleanup now");
        } 
        else 
        {
            printf("Still have %ld bytes free",phone_memory-memory_used);
        }
    }
    
  
    return 0;
}

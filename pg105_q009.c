#include <stdio.h>
int main(int argc, char * argv[]) {
    long phone_memory = 8589934592;
    long memory_used = 0;
    double percent_used = 0;
    
    scanf("%ld", &memory_used);
 
    if (memory_used < 0 || memory_used > phone_memory) {
        printf("Invalid input");
    }
    else {
        percent_used = (memory_used*100.0)/phone_memory;
 
        if (percent_used > 90) {
            /*print out of memory message*/
            printf("OOM");
        } else {
            /*print number of free bytes*/
            printf(" %ld ",phone_memory-memory_used);
        }
    }
    
  
    return 0;
}

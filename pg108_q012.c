int main(int argc, char * argv[]) {
    float percent = 0, average = 0;
    
    scanf("%f %f",&percent, &average);
    
    /* Add checks for both percent and average to be in 0 to 100 range, both inclusive 
     * If found out of range then print "Invalid input" and skip further processing */

    if (memory_used < 0 || memory_used > phone_memory) {
        printf("Invalid input");
    } else {
        percent_used = (memory_used*100.0)/phone_memory;
 
        if (percent_used > 90) {
            printf("Running out of storage, cleanup now\n");
        } else {
            printf("Still have %ld bytes free",phone_memory-memory_used);
        }
    }
    return 0;
}

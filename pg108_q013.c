int main(int argc, char * argv[]) {
    float percent = 0, average = 0;
    
    scanf("%f %f",&percent, &average);
    
    /* Add checks for both percent and average to be in 0 to 100 range, both inclusive 
     * If found out of range then print "Invalid input" and skip further processing 
     * Modify the below qualifying criteria to include additional condition of percent >= 80 */

         if (percent < 0 || percent > 100 || average < 0 || average > 100) {
        printf("Invalid input");
    } else 
         {
        if (percent > average && percent >= 80) {
            printf("Qualify");
        } else {
            printf("Not qualify");
       }
    }
 
    return 0;
}

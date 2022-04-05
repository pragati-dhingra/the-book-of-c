#include <stdio.h>
 
int main(int argc, char * argv[]) {
    float percent = 0, average = 0;
    printf("Enter your percent score: ");
    scanf("%f",&percent);
    printf("Enter class average score: ");
    scanf("%f",&average);
 
    if (percent < 0 || percent > 100 || average < 0 || average > 100) {
        printf("Invalid input\n");
    } else {

    
    /* Add checks for both percent and average to be in 0 to 100 range, both inclusive 
     * If found out of range then print "Invalid input" and skip further processing */

    if (percent > average) {
        printf("Qualify");
    } else {
        printf("Oops");
    }
    return 0;
}

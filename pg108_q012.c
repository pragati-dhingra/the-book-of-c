int main(int argc, char * argv[]) {
    float percent = 0, average = 0;
    scanf("%f %f",&percent, &average);
    
    /* Add checks for both percent and average to be in 0 to 100 range, both inclusive 
     * If found out of range then print "Invalid input" and skip further processing */
    if((percent>=0 && average>=0)&&(percent<=100 && average<=100))
    { 
        if (percent > average) {
            printf("Qualify");
         } else {
            printf("Oops");
      }}
    else
    {
        printf("Invalid input");
    }
    return 0;
}

int main(int argc, char * argv[]) {
    float percent = 0, average = 0;
        float epsilon = 0.00001;

    scanf("%f %f",&percent, &average);
    
    /* Add checks for both percent and average to be in 0 to 100 range, both inclusive 
     * If found out of range then print "Invalid input" and skip further processing */
if((percent < 0-epsilon || percent> 100+epsilon) || (average< 0-epsilon ||  average >100+epsilon)){
       printf("Invalid input");
}else{
    if (percent > average) {
        printf("Qualify");
    } else {
        printf("Oops");
    }
}
    return 0;
}

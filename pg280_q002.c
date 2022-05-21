#include <stdio.h>
double compute_average(int *, int);
void read_score(int *, int);
int main (int argc, char* argv[] ){
    /* Write a program that:
    * Reads an int n from the user - this is the number of input values user wishes to enter
    * If value of n < 1 then print "Invalid input" without quotes and trailing newline and exit the program
    * Allocates memory for storing n ints
    * Calls a function to read in n int values, one value on each line
    * Calls a function that computes average of these n values and returns the average
    * Calling function prints the average value with no trailing spaces or newline. Printed average should have 2 decimal places */
     int *score = NULL, num = 0;
    double average = 0;
 
    scanf("%d",&num);
    if (num<= 0) {
        printf ("Invalid input\n");
        return 1;
    }
 
    score = malloc (sizeof(int) * num);
    if (NULL == score) {
            return 1;
    }
    
    read_score(score, num);
    average = compute_average(score, num);
    printf("%.2f", average);
 
    free(score);
    return 0;
}
 
double compute_average(int *score, int num){
    int sum = 0;
    for(int i=0; i<num; i++){
        sum += score[i];
    }
    return ((double)sum)/num;
}
 
void read_score(int *score, int num) {
    for(int i=0; i<num; i++){
        
        scanf("%d", &score[i]);
    }
}

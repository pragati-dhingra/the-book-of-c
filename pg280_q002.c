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

    int *score = NULL, num_s = 0;
    double avg = 0;
 
    printf ("Please enter number of students: ");
    scanf("%d",&num_s);
    if (num_s <= 0) {
        printf ("Invalid input. Terminating\n");
        return 1;
    }
 
    score = malloc (sizeof(int) * num_s);
    if (NULL == score) {
        printf ("Failed to allocate memory. Terminating\n");
        return 1;
    }
 
    read_score(score, num_s);
    average = compute_average(score, num_s);
    printf("Average score of the class is %f\n", average);
 
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
        printf("Enter score of student #%d: ",i+1);
        scanf("%d", &score[i]);
    }
}

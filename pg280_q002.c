#include <stdio.h>
#include<stdlib.h>

double compute_average(int *, int);
void read_value(int *, int);
int main (int argc, char* argv[] ){
    /* Write a program that:
    * Reads an int n from the user - this is the number of input values user wishes to enter
    * If value of n < 1 then print "Invalid input" without quotes and trailing newline and exit the program
    * Allocates memory for storing n ints
    * Calls a function to read in n int values, one value on each line
    * Calls a function that computes average of these n values and returns the average
    * Calling function prints the average value with no trailing spaces or newline. Printed average should have 2 decimal places */
     int *ptr = NULL, num = 0;
    double average = 0;
 
    scanf("%d",&num);
    if (num<1) {
        printf ("Invalid input\n");
        return 1;
    }
 
    ptr = malloc (sizeof(int) * num);
    if (ptr ==NULL ) {
            return 0;
    }
    
    read_value(ptr, num);
    average = compute_average(ptr, num);
    printf("%.2f", average);
 
    free(ptr);
    return 0;
}
 
double compute_average(int *ptr, int num){
    int sum = 0;
    for(int i=0; i<num; i++){
        sum += ptr[i];
    }
    return ((double)sum)/num;
}
 
void read_value(int *ptr, int num) {
    for(int i=0; i<num; i++){
        
        scanf("%d", &ptr[i]);
    }
}

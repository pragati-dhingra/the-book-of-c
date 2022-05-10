#include <stdio.h>
float compute_average(int marks[], int size);
int main (int argc, char * argv[]) {
    /* Write a program that:
    * 1. Reads ten int as input in an array, one int per line
    * 2. Defines three functions - compute_average, find_max, find_min that find average, max and min in an array 
    * Prints the average of the array (two decimal places), max, and min separated by a single space and no trailing newline 
    * For example: Input 
    * 1
    * 2
    * 3
    * 4
    * 5
    * 6
    * 7
    * 8
    * 9
    * 10
    * Output:
    * "5.50 10 1 " without quotes*/
     int marks[100] = { 0 };
     int i=0;
     float average = 0.0;

     do {
         printf ("Enter marks for student %d", i+1);
         scanf("%d",&marks[i]);
         i++;
     }while(i<100);

     average = compute_average(marks, 100);
     printf("Average score is %f\n", average);
     return 0;
 }

 float compute_average(int marks[], int size) {
     int i=0, sum=0;
     for(i=0; i<size; i++) {
         sum = sum + marks[i];
     }
     return ((1.0*sum)/size);
 }

    
    return 0;
}

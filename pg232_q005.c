#include <stdio.h>
float compute_average(int marks[]);
int find_max(int marks[]);
int find_min(int marks[]);
int main (int argc, char* argv[] ){
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
    
int marks[10];
     int i=0, maxx=0, minn=0;
     float average = 0.0;

     for(i=0; i<10; i++)  {
           scanf("%d",&marks[i]);
     }float compute_average(int marks[], int size) {
     int i=0, sum=0;
     for(i=0; i<size; i++) {
         sum = sum + marks[i];
   }
     return ((1.0*sum)/size);
 }
    int find_max(int marks[], int size) {
    int max = marks[0];
    for(int i=1; i<size; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }
    return max;
}
 
int find_min(int marks[], int size){
    int min = marks[0];
    for(int i=1; i<size; i++) {
        if(marks[i] < min) {
            min = marks[i];
        }
    }
    return min;
}

     average = compute_average(marks);
     maxx = find_max(marks);
     minn = find_min(marks);
     printf("%.2f %d %d", average, maxx, minn);
     return 0;
}

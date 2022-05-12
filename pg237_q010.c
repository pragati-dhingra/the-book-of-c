#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads fifteen int as input in a 2D array marks[5][3] - marks of 5 students in 3 subjects
    * one int per line, marks of first student in each subject followed by marks of second student and so on
    * 2. Prints the overall class average on a single line
    * one float with two decimal places - average of entire 2D array
    * no trailing spaces or newline.
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
    * 11
    * 12
    * 13
    * 14
    * 15
    * Output:
    *  8.00 */
    int arr[5][3],i=0,j=0;
    float avg=0;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            avg=avg+arr[i][j];
        } 
    }
    avg=avg/15;
        printf("%.2f ",avg);
    return 0;
}

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
    int marks[5][3]={0},i=0,j=0,sum=0;
    float average = 0.0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {   
        for(j=0;j<3;j++)
        {
            sum = sum +marks[i][j];
        }

    }
        average = (sum*1.0)/15;
        printf("%.2f ",average);
    return 0;
}

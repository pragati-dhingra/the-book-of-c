#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads fifteen int as input in a 2D array marks[5][3] - marks of 5 students in 3 subjects
    * one int per line, marks of first student in each subject followed by marks of second student and so on
    * 2. Prints the average mark of each student on a single line
    * one float with two decimal places per student
    * each float separated by single space
    * no extra trailing newline.
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
    * "2.00  5.00 8.00 11.00 14.00 "
    * without quotes.
    */
    
    int i = 0, j = 0, marks[5][3], sum = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum = sum + marks[i][j];
        }
        printf("%.2f ",sum / 3.0);
    }
    
    return 0;
}

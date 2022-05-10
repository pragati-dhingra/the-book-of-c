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
    int marks[5][3] = { 0 };
    int student=0, subject=0, sum=0;
 
    for(student=0; student<5; student++) {
        for(subject=0; subject<3; subject++) {
            printf("Enter marks for student %d subject %d: ",student, subject);
            scanf("%d",&marks[student][subject]);
        }
    }
 
 
    for(student=0; student<5; student++) {
        sum = 0;
        for(subject=0; subject<3; subject++) {
            sum = sum + marks[student][subject];
        }
        printf("Student %d scored total %d and average %f\n", student, sum, sum/3.0);
    }
    return 0;
}


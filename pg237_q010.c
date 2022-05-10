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
    
    int marks[5][3] = { 0 };
    int student=0, subject=0, sum=0;
 
    for(student=0; student<5; student++) 
    {
        for(subject=0; subject<3; subject++) 
        {
               scanf("%d",&marks[student][subject]);
        }
    }
 
    for(student=0; student<5; student++) 
    {
        for(subject=0; subject<3; subject++) 
        {
            sum = sum + marks[student][subject];
        }
   }
 
   
        printf("%.2f", sum/15.0);
 
    return 0;
}

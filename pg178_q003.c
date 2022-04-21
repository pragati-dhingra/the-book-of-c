#include <stdio.h>
double average(int,int,int);

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line
    * 2. Invoke a function named average to compute  average of three numbers. The function should return the average value
    * 3. Receives the returned average value in main and prints it on a line by itself with two decimal points and no trailing newline
    * E.g. Input ->  6 10 20
    * Output -> 12.00
    */

    
    int num1=0, num2=0, num3=0;
    double avg=0.0;
    scanf("%d%d%d",&num1,&num2,&num3);
    avg = average(num1,num2,num3);
    printf("%.2f",avg);
       
    return 0;
}

double average(int n1,int n2,int n3)
{
    return ((n1+n2+n3)/3.0);
}
© 2022 GitHub, Inc.

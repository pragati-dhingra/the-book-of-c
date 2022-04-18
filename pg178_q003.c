#include <stdio.h>

float average(int val1, int val2, int val3); 
 int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line
    * 2. Invoke a function named average to compute  average of three numbers. The function should return the average value
    * 3. Receives the returned average value in main and prints it on a line by itself with two decimal points and no trailing newline
    * E.g. Input ->  6 10 20
    * Output -> 12.00
    */
int val1 ,val2,val3;
float avg;
 scanf("%d %d %d",&val1,&val2,&val3);
  avg=average(val1,val2,val3); 
  printf("%.2f",avg);
        
    return 0;
}
    float average(int val1, int val2, int val3) {
    return (val1 + val2+ val3)/3.0;
}

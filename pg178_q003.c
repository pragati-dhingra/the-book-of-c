#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line
    * 2. Invoke a function named average to compute  average of three numbers. The function should return the average value
    * 3. Receives the returned average value in main and prints it on a line by itself with two decimal points and no trailing newline
    * E.g. Input ->  6 10 20
    * Output -> 12.00
    */
    int a=0, b=0, c=0;
    float var=0.0;
    scanf("%d %d %d",&a,&b,&c);
    var=average(a,b,c);
        printf("%.2f",var);
    return 0;
  
}

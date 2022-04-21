#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a double - temp in degree C
    * 2. Invoke a function named celsius_to_fahreheit to convert this input temp to degree F. The function should return the converted temp in F
    * 3. Receives the returned converted value in main and prints it on a line by itself with two decimal points and no trailing newline
    * E.g. Input ->  0
    * Output -> 32.00
    * (C × 9/5) + 32 = F
    */
    double celcius=0.0, farenheit=0.0;
    scanf("%lf",&celcius);
    farenheit = celsius_to_fahreheit(celcius);
    printf("%.2f",farenheit);
    
    return 0;
}
double celsius_to_fahreheit(int C)
{
    double F=0.0;
    F = (C * 9/5.0) + 32;
    return F;
}

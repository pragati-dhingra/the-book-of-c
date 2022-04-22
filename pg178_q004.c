

#include <stdio.h>

float celsius_to_fahreheit(int);
double celsius_to_fahreheit(int);

int main (int argc, char* argv[] ){
    /* Write a program that:
@@ -11,18 +11,17 @@ int main (int argc, char* argv[] ){
    * Output -> 32.00
    * (C × 9/5) + 32 = F
    */
    int celcius=0;
    float farenheit=0.0;
    scanf("%d",&celcius);
    double celcius=0.0, farenheit=0.0;
    scanf("%lf",&celcius);
    farenheit = celsius_to_fahreheit(celcius);
    printf("%.2f",farenheit);

    return 0;
}

float celsius_to_fahreheit(int C)
double celsius_to_fahreheit(int C)
{
    float F=0.0;
    double F=0.0;
    F = (C * 9/5.0) + 32;
    return F;
}

#include <stdio.h>

double average(int val1,int val2,int val3);
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line
        @@ -8,6 +8,12 @@ int main (int argc, char* argv[] ){
    * E.g. Input ->  6 10 20
    * Output -> 12.00
    */

    int val1=0,val2=0,val3=0;
    scanf("%d%d%d",&val1,&val2,&val3);
    printf("%.2lf",average(val1,val2,val3));
    return 0;
    }
double average(int val1,int val2,int val3)
{
    return( (val1+val2+val3)/3.0);
}

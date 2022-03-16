#include<stdio.h>
int main()
{
double inches, centimeter;
printf("Enter length in Inch: ");
scanf("%lf", &inches);
centimeter = 2.54 * inches;
printf ("Value in Centimeter is: %.2f \n", centimeter);
return 0;
}

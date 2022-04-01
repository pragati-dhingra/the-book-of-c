#include <stdio.h>

int main ()
{
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
    double inches = 0,cm = 0;
    scanf("%lf", &inches);
    cm = inches * 2.54;
    printf("%.2f", cm);
    return 0;
}

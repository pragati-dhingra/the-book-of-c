#include <stdio.h>


  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */

#include<conio.h>
int main()
{
    float inch, cm;
    printf("Enter length in Inch: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Equivalent length in Centimeters = %0.2f", cm);
    getch();

  return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
  
  double _d_inches=0;
  printf("Enter value in inch to be converted into entimeters:\n");
  scanf("%lf",&_d_inches);
  printf("Value in Centimeters : \n");
  printf("%.2f cms", _d_inches*2.54);

  return 0;
}

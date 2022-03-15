#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
  double inchvalue = 0.0, cmvalue=0.0;
  printf("enter value in inch\n");
  scanf("%lf", &inchvalue);
  cmvalue = inchvalue * 2.54;
  printf("%0.2lf", cmvalue);  
  return 0
}

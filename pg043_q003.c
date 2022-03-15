#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
  double inch=0;
  printf("Enter the value in inches ");
  scanf("%f",&inch);
  printf("%f inch = %f cms\n", inch, inch*2.54);
  return 0;
}

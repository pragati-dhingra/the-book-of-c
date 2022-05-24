#include <stdio.h>

void main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
  int a,b;
  printf("enter the value");
  scanf("%d",&a);
  b=a*2.54;
  printf("converted in to inches%d",b);
 return 0;
}

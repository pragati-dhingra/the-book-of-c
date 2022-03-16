#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts */
  double height_inch=0;
	double height_cm=0;
	printf("Enter Height:");
	scanf("%lf",&height_inch);
	height_cm=height_inch*2.54;
	printf("Height in cm= %f\n",height_cm);
  
  return 0;
}

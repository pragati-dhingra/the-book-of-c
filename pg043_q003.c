#include <stdio.h>
int main (int argc, char* argv[] ){
  double height_inch=0;
  double height_cm=0;
  printf("Enter Height:");
  scanf("%lf",&height_inch);
  height_cm=height_inch*2.54;
  printf("Height in cm= %f\n",height_cm);
  return 0;
}

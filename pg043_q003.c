#include <stdio.h>

int main (int argc, char* argv[] ){
  int inch,cen;
  printf("enter the number in inches");
  scanf("%f",&inch);
  cen=inch*2.54;
  printf("length in centimeter is = %0.2f",cen);
  
  
  
  return 0;
}

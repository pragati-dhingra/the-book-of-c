#include <stdio.h>

int main (int argc, char* argv[] ){
  /* This is a sample question to make sure your setup is working correctly
   * Update this program to print "Hello World!" without the quotes
   * Once updated, submit a pull request. 
   * You should receive a comment with results on your PR and email notification (unless you have disabled notifications) */
  double inch=0,cm=0;
	//printf("enter value in inches");
	scanf("%lf",&inch);
	cm=inch*2.54;
	printf("%.2lf",cm);
  
  
  return 0
}

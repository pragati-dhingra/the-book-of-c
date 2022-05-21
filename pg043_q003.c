#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Q: Read value in inches and converts it into cms. 1 inch = 2.54 cms 
   * Input one double value followed by a newline
   * Output one double value with two decimal places on a line by itself - no newline.
   * Do not print any extra strings/prompts * 
   int i, sum=0;
   printf("argc=%d\n",argc);
  printf("Let's see what is in argv[]\n");
  if(argc>1)
  {
  for(i=1; i<argc; i++)
  {
    printf("argv[%d] = %s\n",i,argv[i]);
    sum+=atoi(argv[i]);       
           }
    printf("total=%d\n",sum);
           }
  return 0;
}

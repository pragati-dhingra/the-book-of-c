#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Print first 5 fibonacci numbers using for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "0 1 1 2 3 " without quotes. Note there is one space character after each number */
int nextTerm=0, t1=0, t2=1, i=0;
  nextTerm=t1+t2;
  printf("%d %d",t1, t2);
    for (i = 3; i <= 5; i++) {
    printf(" %d", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  } 

    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that read an input integer from user
    * and prints the number of digits in that number on a line by itself with no trailing  newline
    * E.g. if input was 25089 then output should be 5 */
   long long n;
  int count = 0;
  scanf("%lld", &n);
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}

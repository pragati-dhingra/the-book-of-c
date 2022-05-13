#include <stdio.h>

int next_highest_perfect_square(int val) {
 int i = 1;
 while(i*i <= val) {
 i++;
 }
 return i*i;
 }
 void update_val(int *a) {
 *a = next_highest_perfect_square(*a);
 printf("%d",*a);
 }
 int main (int argc, char* argv[] )
 {
int val=0;
scanf("%d",&val);
update_val(&val);
return 0;
 }

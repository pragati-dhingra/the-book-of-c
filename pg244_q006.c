#include <stdio.h>

int add(int *a, int *b);
int subtract(int *a, int *b);
int multiply(int *a, int *b);
int divide(int *a, int *b);
int main (int argc, char * argv[]) {
 int var1, var2, sum=0,sub=0,mul=0,div=0;

scanf("%d%d",&var1,&var2);
int *ptr1 = &var1, *ptr2 = &var2;
 sum = add(ptr1, ptr2);
 sub=subtract(ptr1,ptr2);
 mul=multiply(ptr1,ptr2);
 div=divide(ptr1,ptr2);
  printf("%d / %d = %d\n", var1, var2, div);
return 0;
}
int add(int *a, int *b) {
 return(*a + *b);
}
int subtract(int *a, int *b) {
 return(*a - *b);
}
int multiply(int *a, int *b) {
 return(*a * *b);
}
int divide(int *a, int *b) {
 return(*a / *b);
}

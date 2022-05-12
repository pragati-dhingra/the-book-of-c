#include <stdio.h>
 int add(int *a, int *b);
int subtract(int *a, int *b);
int multiply(int *a, int *b);
int divide(int *a, int *b);
int main (int argc, char* argv[] ){
    /* Write a calculator program for integer arithmetic that supports add, multiply, subtract, and divide operations 
    * Respective operators are + * - /  
    * Each operation should be implemented as a separate function
    * all parameters to all functions should be passed as pointers
    * Input format  int char int --> three values on a single line separated by single space followed by newline
    * Output format - result on a single line with no trailing spaces or newline. Divide by zero check is not required
    * Example, input:
    * 5 / 3
    * output:
    * 1  */
   
 
    int var1=7, var2=10;
    char c;
    int *ptr1 = &var1, *ptr2 = &var2;
   scanf("%d %c %d",&var1, &c, &var2);
   if(c=='+'){  
 add(ptr1, ptr2);
   }
   if(c=='-'){  
 subtract(ptr1, ptr2);
   } 
  if(c=='*'){  
 multiply(ptr1, ptr2);
   }
  if(c=='/'){  
 divide(ptr1, ptr2);
   }
    return 0;
}
int add(int *a, int *b) {
     printf("%d",*a + *b);
 }
int subtract(int *a, int *b) {
    printf("%d",*a - *b);
}
 
int multiply(int *a, int *b) {
    printf("%d",*a * *b);
}
 
int divide(int *a, int *b) {
    printf("%d",*a / *b);
}
 

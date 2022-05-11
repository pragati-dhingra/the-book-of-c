#include <stdio.h>
int add(int *a, int *b){
    return(*a - *b);
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
    int var1=0, var2=0, sum=0,sub=0, mul=0, div=0;
    int *ptr1 = &var1, *ptr2 = &var2;
    char a;
    scanf("%d%c%d",&var1,&a,&var2);
    if(a=='+'){
    sum = add(ptr1, ptr2);
    printf("%d",sum);
    }
     if(a=='-'){
     sub = subtract(ptr1, ptr2);
    printf("%d",sub);
     }
     if(a=='*'){
     mul = multiply(ptr1, ptr2);
    printf("%d",mul);
     }
     if(a=='\'){
     div = divide(ptr1, ptr2);
    printf("%d",div);
        }
     return 0;
 }

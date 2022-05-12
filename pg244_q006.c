#include <stdio.h>

int add(int *a, int *b);
int subtract(int *a, int *b);
int multiply(int *a, int *b);
int divide(int *a, int *b);

int main (int argc, char * argv[]) {
    int num1=0, num2=0;
    char operator=0;
 
    printf("enter operand1");
    scanf("%d", &num1);
    printf("enter operator(+,-,*,/)");
    scanf(" %c", &operator);
    printf("enter operand2");
    scanf("%d", &num2);
    
   
 int *ptr1 = &num1, *ptr2 = &num2;
    if('+' == operator) {
        printf("%d",add(ptr1, ptr2));
    } else if('-' == operator) {
       printf("%d",subtract(ptr1, ptr2));
    } else if('*' == operator) {
        printf("%d",multiply(ptr1, ptr2));
    } else if('/' == operator) {
        printf("%d",divide(ptr1, ptr2));
    } else {
        printf("Invalid input");
    }

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

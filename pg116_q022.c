#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a calculator program using switch case 
   * Input format --> operand operator operand
   * E.g 
   * 10 + 20
   * 100 / 10
   * Output --> result of computation with no trailing newline 
   * No error checking is expected. Operands are int. Handle 4 arithmetic operators + - * /
   * Only integer calculator is expected. Do not create float calculator */
  int operand1 = 0, operand2 = 0;
    char operator = 0;
 
    scanf("%d %c %d", &operand1 , &operator, &operand2);
    
    switch(operator) {
        case '+':
            printf("%d\n", operand1 + operand2);
            break;
        case '-':
            printf("%d\n", operand1 - operand2);
            break;
        case '*':
            printf("%d\n", operand1 * operand2);
            break;
        case '/':
            printf("%d\n", operand1 / operand2);
            break;
        default:
            printf("Unrecognised operator");
    }
    return 0;
}

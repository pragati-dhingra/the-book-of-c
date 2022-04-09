#include <stdio.h>

int main (int argc, char* argv[] ){
  int first=0,second=0,ans=0;
  printf("Enter two numbers);
  scanf("%d%d",&first,&second);
  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
              }
    /* Write a calculator program using switch case 
   * Input format --> operand operator operand
   * E.g 
   * 10 + 20
   * 100 / 10
   * Output --> result of computation with no trailing newline 
   * No error checking is expected. Operands are int. Handle 4 arithmetic operators + - * /
   * Only integer calculator is expected. Do not create float calculator */
  
  return 0;
}

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
  int op1=0, op2=0;
    char opr;
    scanf("%d %c %d", &op1, &opr, &op2);
    switch(opr){
        case '+': printf("%d",op1+op2);
                break;
        case '-': printf("%d",op1-op2);
                break;
        case '*': printf("%d",op1*op2);
                break;
        case '/': printf("%d",op1/op2);
                break;
                
    }
  return 0;
}

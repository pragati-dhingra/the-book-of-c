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
int num1, num2;
char op;
scanf("%d",&num1);
scanf("%c",&op);
scanf("%d",&num2);
switch(op)
{
	case '+':
	printf("Result is %d",num1+num2);
         break;
	case '-':
	printf("Result is %d",num1-num2);
         break;
	case '*':
	printf("Result is %d",num1*num2);
         break;
	case '/':
	printf("Result is %d",num1/num2);
         break;
	}
  return 0;
}

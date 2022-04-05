include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a calculator program using switch case 
   * Input format --> operand operator operand
   * E.g 
   * 10 + 20
   * 100 / 10
   * Output --> result of computation with no trailing newline 
   * No error checking is expected. Operands are int. Handle 4 arithmetic operators + - * /
   * Only integer calculator is expected. Do not create float calculator */
  int a,b;
  char c;
  scanf("%d %c %d",&a,&c,&b);
  switch(c)
  {case '+' :
    printf("%d",a+b);
    break;
   case '-':
     printf("%d",a-b);
     break;
   case '*':
     printf("%d",a*b);
     break;
   case '/':
     printf("%d",a/b);
     break;
   default:
     printf("Invalid Input");
  }
 
  return 0;
}


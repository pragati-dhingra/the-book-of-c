#include <stdio.h>

int main() {

  char op;
  int first, second;
  scanf("%d\t%c\t%d", &first, &op, &second);

  switch (op) {
    case '+':
      printf("%d", first + second);
      break;
    case '-':
      printf("%d",first - second);
      break;
    case '*':
      printf("%d",first * second);
      break;
    case '/':
      printf("%d",first / second);
      break;
  }

  return 0;
}


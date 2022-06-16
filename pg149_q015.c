#include <stdio.h>

int main() {

  int n, i=1,sum=0;
  scanf("%d",&n);
  while(n/i!=0)
  {
      sum++;
      i=i*10;
  }
  printf("%d",sum);
  return 0;
}

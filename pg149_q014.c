#include <stdio.h>

int main() {

  int n, i,sum=0;
  scanf("%d",&n);
  if(n>=1 && n<=1000)
  {
      i=1;
    while(i<=n)
    {
      sum=i+sum;
      i++;
    }
    printf("%d",sum);
  }
  else
{
    printf("Invalid input");
}
  return 0;
}

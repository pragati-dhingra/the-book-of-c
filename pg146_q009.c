#include <stdio.h>

int main() {

  int n, i,sum=0;
  scanf("%d",&n);
  if(n>=1 && n<=1000)
  {
    for(i=1; i<=n; i++)
    {
      sum=i+sum;
    }
    printf("%d",sum);
  }
  else
{
    printf("Invalid input");
}
  return 0;
}

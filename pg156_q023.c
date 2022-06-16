#include <stdio.h>

int main() {

  int n,i;
  scanf("%d",&n);
  if(n>=1)
  {
      for(i=1;i<=n;i++)
      {
          if(n%i==0)
          {
              printf("%d ",i);
          }
      }
  }
  else
  {
      printf("Invalid input");
  }
  return 0;
}

#include <stdio.h>

int main() {

  int n, i=1,sum=0;
  scanf("%d",&n);
  if(n!=0)
  {
      while(n/i!=0)
    {
      sum++;
      i=i*10;
     }
  }
  else 
  {
      sum=1;
    
  }
  printf("%d",sum);
  return 0;
}

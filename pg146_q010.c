#include <stdio.h>

int main() {
int i, sum=0, a=0,b=1;
printf("%d %d ",a,b);
for(i=0; i<3; i++)
{
    
    sum=a+b;
    printf("%d ",sum);
    a=b;
    b=sum;
    
}
  return 0;
}

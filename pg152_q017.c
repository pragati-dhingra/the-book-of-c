#include <stdio.h>

int main() {

  int n,i;
  scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
     if(i*i==n)
     {
         printf("Yes");
         return 0;
     }
 }
 printf("No");
  return 0;
}

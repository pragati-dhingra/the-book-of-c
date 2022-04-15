#include <stdio.h>

int main (int argc, char* argv[] ){
  int n=0 , i = 0, sum = 0;
	     scanf("%d", &n);
	    if (n<=0||n>=1001)  {
	        printf("Invalid input");
	    } else {
	        for (i=1;i<=n;i++) {
	            sum=sum+i;
	        }
	        printf("%d",sum);
	    }
	
	    return 0;
	}

#include <stdio.h>

int main (int argc, char* argv[] ){
    int n = 0, i = 1, sum = 0;
	    scanf("%d", &n);
	    if (n<=0||n>=1001) {
	         printf("Invalid input");
	    } else {
	        while(i<=n) {
	            sum=sum+i;
	            i++;
	        }
	        printf("%d", sum);
	    }
	
	    return 0;
	}

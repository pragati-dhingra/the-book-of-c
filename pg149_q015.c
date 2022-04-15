#include <stdio.h>

int main (int argc, char* argv[] ){
   int num = 0, digits = 0;
	    scanf("%d", &num);
	    if (0==num) {
	        digits=1;
	    } else 
	    
	    {
	        while(num) {
	            num/=10;
	            digits++;
	        }
	    }
	    printf("%d", digits);
	
	    return 0;
	}

#include <stdio.h>

int main (int argc, char* argv[] ){
   int num =0, i = 1;
	   
	    scanf("%d", &num);
	     if (num<=0 && num>=9) {
	        printf("Invalid input");
	    } else {
	        while (i*i<=num) {
	            if(i*i==num) {
	                 printf("Yes");
	                 break;
	            }
	            i++;
	        }
	        if(num!=i*i) {
	            printf("No");
	        }
	    }
	
	    return 0;
	}

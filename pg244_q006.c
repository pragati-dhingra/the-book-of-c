#include <stdio.h>

	int add(int *a, int *b);
	int multiply(int *a, int *b);
	int subtract(int *a, int *b);
	int divide(int *a, int *b);
	

int main (int argc, char* argv[] ){
    /* Write a calculator program for integer arithmetic that supports add, multiply, subtract, and divide operations 
    * Respective operators are + * - /  
    * Each operation should be implemented as a separate function
    * all parameters to all functions should be passed as pointers
    * Input format  int char int --> three values on a single line separated by single space followed by newline
    * Output format - result on a single line with no trailing spaces or newline. Divide by zero check is not required
    * Example, input:
    * 5 / 3
    * output:
    * 1  */
        int var1=0, var2=0;
	    int *ptr1 = NULL, *ptr2 = NULL;
		char ch;
		
		scanf("%d",&var1);
		scanf("%c",&ch);
		scanf("%d",&var2);
		printf("\n");
		ptr1=&var1;
		ptr2=&var2;
		switch(ch)
		{
			case '+':
				printf("%d",add(ptr1, ptr2));
	    		
	    		break;
			case '*':	
				printf("%d",multiply(ptr1, ptr2));
			    
			    break;
			case '-':
				printf("%d",subtract(ptr1, ptr2));
	    		
	    		break;
	    	case '/':
	    		printf("%d",divide(ptr1, ptr2));
	   			break;
		}
			    
	    return 0;
	 }

 int add(int *a, int *b) {
     return(*a + *b);
    }		 

int subtract(int *a, int *b) {
    return(*a - *b);
}
 
int multiply(int *a, int *b) {
    return(*a * *b);
}
 
int divide(int *a, int *b) {
    return(*a / *b);
}	

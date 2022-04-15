#include <stdio.h>

int main (int argc, char* argv[] ){
    int f0 = 0, f1 = 1, f = 0, i = 0;
	     printf("%d %d ", f0, f1);
	     for(i=0; i<3; i++) {
	        f = f0 + f1;
	        printf("%d ", f);
	        f0 = f1;
	        f1 = f;
	    }
	
	    return 0;
	}

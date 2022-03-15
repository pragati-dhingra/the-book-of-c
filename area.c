#include <stdio.h>
int main(int argc, char * argv[])
    {
    	int radius=2;
    	double pi=3.14, circumference=0, area=0;
    	area= pi * radius * radius;
    	printf("The area of circle having radius %d is %f\n",radius, area);
    	circumference = 2 * pi * radius;
    	printf("The circumference of circle having radius %d is %f \n", radius, circumference);
    	return 0;
    	
	}

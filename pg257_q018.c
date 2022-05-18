#include <stdio.h>
oid add_array(int arr[],int size);
int main (int argc, char* argv[] ){
    /* Write a program that reads in five integers in an array, one integer per line
    * Defines a function add_array that adds all ints of the array using a countdown loop
    * For example, input:
    * 3
    * 7
    * 10
    * 15
    * 3
    * Output: 
    * "38" without quotes - no trailing space or newline 
    */
    int arr[5]={0};
	int i=0;	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	add_array(arr,5);
	
  return 0;
}
void add_array(int arr[],int size)
{
	int i=0,sum=0;
	for(i=size;i>=0;i--)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);	 		
}

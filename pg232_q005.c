#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads ten int as input in an array, one int per line
    * 2. Defines three functions - compute_average, find_max, find_min that find average, max and min in an array 
    * Prints the average of the array (two decimal places), max, and min separated by a single space and no trailing newline 
    * For example: Input 
    * 1
    * 2
    * 3
    * 4
    * 5
    * 6
    * 7
    * 8
    * 9
    * 10
    * Output:
    * "5.50 10 1 " without quotes*/
   int arr[10] = {0};
    int i=0;
    int val=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
 
 scanf("%d",&val);
 i=find_val(arr,10,val);
 if(i==-1)
  printf("no");
 else
  printf("yes");
    
  int find_val(int arr[], int size, int val)
  { int i=0;
    	for(i=0; i<10; i++) 
		{
        if(arr[i] == val) 
		{
            return i;
        }
        }
    return -1;
    }

return 0;
}
   

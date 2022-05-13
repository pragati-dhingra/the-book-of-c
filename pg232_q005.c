#include <stdio.h>
int find_max(int a[],int n)
    {
      int max=a[0],i=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
           max=a[i];
    }
        return max;
    }
int find_min(int a[],int n)
    {
        int min=a[0],i=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
           min=a[i];
    }
        return min;
    }
float compute_average(int a[], int n)
{
    float average = 0.0;
	    int i=0;
	    for(i=0; i<n; i++) {
        average += a[i];
    }
    average /= 10;
    return average;
  }
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
int i=0,a[10]={0}; 
  float ave=0.0;
        for(i=0;i<10;i++)
        scanf("%d\n",&a[i]);
  printf("%.2f ", compute_average(a,10));
        printf("%d ",find_max(a,10));
       printf("%d ",find_min(a,10));

    return 0;
}

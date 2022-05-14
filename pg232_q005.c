#include <stdio.h>
float compute_average(int arr[]);
int find_max(int a[]);
int find_min(int a[]);
int main(int argc, char *argv[])
{
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
    int a[10] = {0};
    int ctr = 0;
    int min,max;
    float avg;
    
    for (ctr = 0; ctr < 10; ctr++)
    {
        scanf("%d", &a[ctr]);
        
    }
    avg=compute_average(a);
    max=find_max(a);
    min=find_min(a);
    printf("%0.2f %d %d", avg, max, min);
    return 0;
}


float compute_average(int arr[]){
    float avg=0;
    int ctr=0;
    for(ctr=0; ctr<10;ctr++){
        avg+=arr[ctr];
    }
    avg=avg/10.0;
    return avg;
}
int find_max(int a[])
{
    int ctr = 0;
    int max = 0;
    for (ctr = 0; ctr < 10; ctr++)
    {
        if (a[ctr] > max)
        {
            max = a[ctr];
        }
    }
    
    return max;
}
int find_min(int a[])
{
    int ctr = 0;
    int min = a[0];
    for (ctr = 0; ctr < 10; ctr++)
    {
        if (a[ctr] < min)
        {
            min = a[ctr];
        }
    }
    
    return min;
}

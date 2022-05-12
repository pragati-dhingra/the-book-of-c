#include <stdio.h>
float compute_avg(int arr[],int size);
int compute_max(int arr[],int size);
int compute_min(int arr[],int size);

int main (int argc, char* argv[] ){
    int arr[10]={0},max=0,min=0;;
    float avg=0.0;
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    avg = compute_avg(arr,10);
    max= compute_max(arr,10);
    min = compute_min(arr,10);
    
    printf("%.2f %d %d",avg,max,min);
   
    return 0;
}

float compute_avg(int arr[],int size)
{
    int i=0,sum=0;
    float avg=0.0;
    for(i=0;i<size;i++)
    {
        sum = sum +arr[i];
    }
    avg = sum*1.0/size;
    
    return avg;
}

int compute_max(int arr[],int size)
{
    int i=0,max = 0;
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            
        }
    }
    return max;
}

int compute_min(int arr[],int size)
{
     int i=0,min = arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            
        }
    }
    return min;
}
© 2022 GitHub, Inc.
Term

#include<stdio.h>
 
int main (int argc, char * argv[])  {
    float arr [] = { 1.2, 2.1, 3.4, 9.4, 10.5, 6.6, 0.7, 10, 8.8, 1.9 };
    float average = 0.0;
 
    for(int i=0; i<10; i++) {
        average += arr[i];
    }
    average /= 10;
    printf("Average of array is %f\n", average);
    return 0;
}

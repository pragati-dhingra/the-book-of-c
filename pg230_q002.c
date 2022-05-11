
#include<stdio.h>
 
int main (int argc, char * argv[])  {
    int arr [] = { 1, 2, 3, 4, 5, 6, 7, 10, 8, 9 };
 
    /* If we initialize max to 0, program will fail if
     * all elements of array were negative. */
    int max = arr[0];
 
    for(int i=1; i<10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max value in array is %d\n", max);
    return 0;
}

#include <stdio.h>
int sum_array(int arr[], int size);
 

int main (int argc, char* argv[]) {
    int arr[4] = { 0 },i=0;
    int sum=0;
    for(i=0; i<5; i++) {
    scanf("%d",&arr[i]);
    }
    sum = sum_array(arr, 4);
    printf("%d",sum);
}

int sum_array(int * arr, int size) {
    int result = 0, i = 0;
 
    for(i=size; i>=0; i--,arr++) {
        result += *arr;
    }
    return result;
}

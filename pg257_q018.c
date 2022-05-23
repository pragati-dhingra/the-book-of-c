#include <stdio.h>

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

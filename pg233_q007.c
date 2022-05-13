#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads twenty int as input in two arrays, ten int per array, one int per line
    * First 10 ints go to first array (in order) and next 20 ints go to second array (in order)
    * 2. Defines a function add() to add the values in both arrays and store result in third array
    * 0th index of  third array is sum of 0th index value in array 1 and 2
    * 3. Prints contents of third array on a single line with one space after each element and no trailing newline.
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
    * 11
    * 12
    * 13
    * 14
    * 15
    * 16
    * 17
    * 18
    * 19
    * 20
    * Output:
    * "12 14 16 18 20 22 24 26 28 30 "
    * without quotes.
    */
    
    int arr1[ARRAY_SIZE] = { 0 };
    int arr2[ARRAY_SIZE] = { 0 };
    int result[ARRAY_SIZE] = { 0 };
 
    read_arr(arr1, ARRAY_SIZE);
    read_arr(arr2, ARRAY_SIZE);
    add_arr(arr1, arr2, result, ARRAY_SIZE);
    
    for(int i=0; i<ARRAY_SIZE; i++) {
        printf("%d ",result[i]);
    }
    return 0;
}
 
void read_arr(int arr[], int size) {
    for(int i=0; i<size; i++) {
         scanf("%d", &arr[i]);
    }
}
 
void add_arr(int arr1[], int arr2[], int result[], int size) {
    for(int i=0; i<size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

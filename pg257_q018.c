#include <stdio.h>
int add_array(int * arr, int size);
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
    int arr[4] = { 9, 3, 7, 12 };
    int sum=0;
    sum = add_array(arr, 4);
    printf("Sum of array is %d\n",sum);
  return 0;
}
int add_array(int * arr, int size) {
    int result = 0, i = 0;
 
    for(i=size-1; i>=0; arr++,i--) {
        result += *arr;
    }
    return result;
}

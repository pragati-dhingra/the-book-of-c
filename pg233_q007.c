#include <stdio.h>
void add(int arr1[], int arr2[]);

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
   int arr1[10] = { 0 }, arr2[10] = { 0 },  j = 0;

   
        for (j = 0; j < 10; j++)
        {
            scanf_s("%d", &arr1[j]);
        }
   
        
    
        for (j = 0; j < 10; j++)
        {
            scanf_s("%d", &arr2[j]);
        }
    
        

    add(arr1, arr2);
    return 0;
}

void add(int arr1[], int arr2[])
{
    int arr3[10] = { 0 },  j = 0;

    
        for (j = 0; j < 10; j++)
        {
            arr3[j] = arr1[j] + arr2[j];
        }
   

   
        for (j = 0; j < 10; j++)
        {
            printf("%d ", arr3[j]);
        }
    
}

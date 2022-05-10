#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads ten int as input in an array, one int per line
    * 2. Reads another int on a line by itself as input value to search in the array
    * 3. Defines a function find() to find a value in an array 
    * Prints "yes", without quotes, if the value was found in array or 
    * prints "no", without quotes, if value was not found in the array
    * No trailing spaces or newline in either case. Output is case sensitive
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
    * 17
    * Output:
    * no */
    int find_val(int arr[], int size, int val);
int main (int argc, char * argv[])  {
    int arr[10] = {0};
 	int x=0,val=0;
 	int i=0;
 	 for( i=0; i<10; i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&val);
	x=find_val(arr,10,val);
 	if(x==-1){
 		printf("no");
 		}
 	else {
 		printf("yes");
	 }
 	return 0;
}
 	int find_val(int arr[], int size, int val){
    for(int i=0; i<size; i++) {
        if(arr[i] == val) {
            return i;
        }
    }
    return -1;
}
 

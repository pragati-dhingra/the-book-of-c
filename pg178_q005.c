#include <stdio.h>
int max_2(int val1, int val2);
int max_3(int val1, int val2, int val3);

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line separated by single space character.
    * 2. Defines a function named max to return higher of two integer parameters. 
    * 3. Determines max of 3 input integers by using this max function
    * 4. Prints the highest of 3 input integers as output on a line by itself with no trailing space or newline
    * E.g. Input ->  -10 0 10
    * Output -> 10
    */
   int val1,val2,val3;
    scanf("%d %d %d",&val1,&val2,&val3);
    int max;
    max=max_2(val1,val2);
    max=max_3(val1,val2,val3);
    printf("%d",max);
    return 0;
}
int max_2(int val1, int val2) {
    if(val1 > val2) {
        return val1;
    }
    return val2;
}

int max_3(int val1, int val2, int val3) {
    int higher = 0;
    higher = max_2(val1, val2);
    higher = max_2(val3, higher);
    return higher;
}

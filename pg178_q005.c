#include <stdio.h>

int max(int a, int b)
{
    if(a<b)
    { return b;}
    else
    { return a;}

}

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads three integers on a single line separated by single space character.
    * 2. Defines a function named max to return higher of two integer parameters. 
    * 3. Determines max of 3 input integers by using this max function
    * 4. Prints the highest of 3 input integers as output on a line by itself with no trailing space or newline
    * E.g. Input ->  -10 0 10
    * Output -> 10
    */
    
    int n1, n2, n3, higher, maximum;

    scanf_s("%d %d %d", &n1, &n2, &n3);
    higher = max(n1, n2);
    maximum = max(higher, n3);
    printf("%d", maximum);
     
    return 0;
}

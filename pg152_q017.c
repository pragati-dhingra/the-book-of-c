#include <stdio.h>
#include <math.h>
int main (int argc, char* argv[] ){
    /* Write a program to determine if a given input is a perfect square or not
    * User input would be a single integer
    * If user input was a perfect square then print Yes else print No on a line by itself with no trailing newline
    * Output is case sensitive
    * E.g. 
    * 4
    * Yes */
    int num;
    int Var;
    float Var1;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    Var1=sqrt((double)num);
    Var=Var1;
    if(Var==Var1)
        printf("Yes");
    else
        printf("no");
    return 0;
}
    

#include<stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program to print sum of all digits of a number
    * input -> an integer
    * Expected output -> print sum of all digits of that number on a single line with no trailing newline
    * E,g. input -> 7
    * output -> 7
    * input -> -110
    * output -> 2  */
    int number =0,sum=0;
    scanf("%d",&number);
        while(number !=0)
        {
            sum=sum+number%10;
            number=number/10;
        }
        printf("%d",sum);

    return 0;
}

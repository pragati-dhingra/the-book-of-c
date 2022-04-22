#include <stdio.h>
float average(int,int,int);
double average(int,int,int);

int main (int argc, char* argv[] ){
    /* Write a program that:
@@ -12,15 +12,15 @@ int main (int argc, char* argv[] ){


    int num1=0, num2=0, num3=0;
    float avg=0.0;
    double avg=0.0;
    scanf("%d%d%d",&num1,&num2,&num3);
    avg = average(num1,num2,num3);
    printf("%.2f",avg);

    return 0;
}

float average(int n1,int n2,int n3)
double average(int n1,int n2,int n3)
{
    return ((n1+n2+n3)/3.0);
}

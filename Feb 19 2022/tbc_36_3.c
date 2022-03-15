/*Program to swap contents of variable*/
#include<stdio.h>
void main()
{
    int x=0,y=0, t=0;
    x=40;
    y=60;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d", x,y);
    return;

}
#include <stdio.h>

int main (int argc, char* argv[] ){
int a=0, b=0, c=0;
    float  ret=0;

    scanf("%d %d %d",&a,&b,&c);


    ret=average(a, b,c);
    printf("%0.2f",ret);
    return 0;
}

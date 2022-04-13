#include <stdio.h>

int main (int argc, char* argv[] ){
    int num=0,c=0;
    scanf("%d",&num);
    if(num==0){
        c++;
    } else {
    while(num)
    {
        num=num/10;
        c++;
    }}
    printf("%d",c);
    return 0;
}

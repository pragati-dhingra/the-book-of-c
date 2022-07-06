#include <stdio.h>
void main()
{
    int a,s,sum=0;
    scanf("%d",&a);
    while (a!=0)
    {
        s=a%10;
        sum=sum+s;
        a=a/10;
    }
    
    printf("%d",sum);
    
    
}

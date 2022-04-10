int main (int argc, char* argv[] ){
    /* Write a program to print sum of all digits of a number
    * input -> an integer
    * Expected output -> print sum of all digits of that number on a single line with no trailing newline
    * E,g. input -> 7
    * output -> 7
    * input -> -110
    * output -> 2  */ 
    int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0)
    {
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }
    printf("Sum is=%d",sum);
    return 0;  
}   
    

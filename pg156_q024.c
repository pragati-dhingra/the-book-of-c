int main (int argc, char* argv[] ){
    /* Write a program to print sum of all digits of a number
    * input -> an integer
    * Expected output -> print sum of all digits of that number on a single line with no trailing newline
    * E,g. input -> 7
    * output -> 7
    * input -> -110
    * output -> 2  */
int n=0,a=0,d=0;
    scanf("%d", &n);
   
    while (n != 0)
    {
        d = n % 10;
        n=n/10;
        a=a+d;
    }
    
    printf("%d",a);

    return 0;
}

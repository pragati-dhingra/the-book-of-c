int main (int argc, char* argv[] ){
    /* Write a program to print sum of all digits of a number
    * input -> an integer
    * Expected output -> print sum of all digits of that number on a single line with no trailing newline
    * E,g. input -> 7
    * output -> 7
    * input -> -110
    * output -> 2  */
    
    int n = 0, d = 0, sum = 0;
    scanf_s("%d", &n);
    if (n < 0)
    {
        n = -n;
    }
    
    d = n;
    while (d != 0)
    {
        d = n % 10;
        n = n / 10;
        sum = sum + d;
    }
    printf("%d", sum);
    

    return 0;
}

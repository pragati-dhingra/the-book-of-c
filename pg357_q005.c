


    /* Write a recursive program that:
    * Reads an int n as input, on a line by itself
    * And prints the nth Fibonacci number as output 
    * If input was negative number then 0 should be printed
    * F(0) = 0, F(1) = 1
    * Output is on a line by itself with no trailing whitespace or newline */
   
*/
#include <stdio.h>
void f(int);

int main(int argc, char *argv[])
{
    /* Write a recursive program that:
     * Reads an int n as input, on a line by itself
     * And prints the nth Fibonacci number as output
     * If input was negative number then 0 should be printed
     * F(0) = 0, F(1) = 1
     * Output is on a line by itself with no trailing whitespace or newline */
    int n = 0;
    
    scanf("%d", &n);
    fflush(stdin);
    f(n);
    
    return 0;
}
void f(int n){
    int ctr = 2;

    int x1 = 0, x2 = 1, temp = 0;
    
    
    if (n <= 0)
    {
        printf("0");
        
    }
    else if(n == 1)
    { 
        printf("1");
        
    }
    else
    {

        while (ctr < n)
        {
            temp = x1 + x2;
            x1 = x2;
            x2 = temp;
            ctr++;
        }
        printf("%d", temp);
    }

}

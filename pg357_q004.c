    int factorial (int a)
    {
            if(a==0)
            {
                return 1;
            }
        return a*factorial(a-1);
    }    


    int main (int argc, char* argv[] ){
        /* Write a recursive program that:
        * Reads an int as input, on a line by itself
        * And prints the factorial of that number as output 
        * If input was 0 or negative number then 0 should be printed
        * Output is printed on a line by itself with no trailing whitespace or newline */

        int a;
        scanf("%d",&a);
        if(a>0)
        {
            int ans = factorial(a);
            printf("%d",ans);
        }
        else
        {
        printf("%d",0);
        }

        return 0;
    }

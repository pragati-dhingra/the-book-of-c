#include <stdio.h>

int next_highest_perfect_square(int val) {
    int i = 1;
    while(i*i <= val) {
        i++;
    }
    return i*i;
}

int update_val(int *a) {
    *a = next_highest_perfect_square(*a);
    printf("%d", *a);
}
int main (int argc, char* argv[] ){
    /* Write a function that takes an int pointer as argument and updates the value at that location to next highest perfect square.
    * If input number was perfect square then it should remain unchanged
@@ -11,5 +22,10 @@ int main (int argc, char* argv[] ){
    * output:
    * "9" without quotes - no trailing space or newline 
    * assume all inputs will be positive numbers */
    int b=0;

    scanf("%d",&b);
    update_val(&b);

    return 0;
}

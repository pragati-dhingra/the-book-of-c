#include <stdio.h>
 
int main(int argc, char * argv[]) {
    int num = 0, sum = 0;
 
    printf("Enter a number: ");
    scanf("%d", &num);
 
    do {
        sum += num%10;
        num /= 10;
    }while(num);
 
    printf("sum of digits = %d\n", sum);
 
    return 0;
}

#include <stdio.h>
 
int main(int argc, char * argv[]) {
    int num = 0, i = 0, sum = 0;
 
    printf("Enter a number");
    scanf("%d", &num);
    if (num < 1 || num > 1000) {
        printf("Invalid Input\n");
    } else {
        for (i=1; i <= num; i++) {
            sum += i;
        }
        printf("%d",sum);
    }
 
    return 0;
}

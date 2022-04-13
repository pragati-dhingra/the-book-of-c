#include <stdio.h>

int main (int argc, char* argv[] ){
   int num = 0, i = 1;
scanf("%d", &num);
if( num < 1){
    printf("Invalid input");
}else if(num > 1) {
    do {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }while(i<=num/2);

    printf("%d ", num);

    }
    else {
        printf("%d ", num);
    }
    return 0;
}

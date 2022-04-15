int main (int argc, char* argv[] ){
    /* Write a program to print sum of all digits of a number
    * input -> an integer
    * Expected output -> print sum of all digits of that number on a single line with no trailing newline
    * E,g. input -> 7
    * output -> 7
    * input -> -110
    * output -> 2  */
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

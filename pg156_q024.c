int main (int argc, char* argv[] ){
    /* Write a program to print sum of all digits of a number
    * input -> an integer
    * Expected output -> print sum of all digits of that number on a single line with no trailing newline
    * E,g. input -> 7
    * output -> 7
    * input -> -110
    * output -> 2  */
int num = 0, sum = 0;

    scanf("%d",&num);

    if(num<0){
    	num=num*-1;
	}
     do {
        sum += num%10;
        num /= 10;
    }while(num);

    printf("%d",sum);
    return 0;
}

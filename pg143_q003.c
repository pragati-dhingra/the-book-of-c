int main (int argc, char* argv[] ){
    int num;
    /* Print numbers 10 to 1 using a for loop
    * All numbers should appear on a single line separated by a single space
    * Expected output -> "10 9 8 7 6 5 4 3 2 1 " without quotes. 
    * Note there is one space character after each number */
    for(num=10;num>=1;num--)
    {
        printf("%d ",num);
    }
  
    return 0;
}

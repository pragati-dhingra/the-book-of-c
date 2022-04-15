int main (int argc, char* argv[] ){
    int num = 0, sum = 0;
	 
	    scanf("%d", &num);
	     do {
	        sum += num%10;
	        num /= 10;
	    }while(num);
	 
	    printf("%d", sum);
	 
	
	    return 0;
	}

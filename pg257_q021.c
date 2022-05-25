int main (int argc, char* argv[] ){
    /* Write a program that reads in an int n where n<30. This is the number of input values.
    * Followed by n float inputs, one on each line 
    * and prints average of last 7 inputs on a line by itself
    * followed by average of all n values on a line by itself
    * If n < 7 the first output should be printed as 0
    * Both output values should have two decimal places and no trailing space or newline  
    * For example, input:
    * 3
    * 42.2
    * 44.4
    * 47.0
    * Output: 
    * 0.00
    * 44.53
    * Error checking value of n is not expected. 0 < n < 30 
    */
    float arr[30]={0.0};
	int n=0,i=0,x=0;
	float sum=0.0,avg=0.0;
	
	
	scanf("%d",&n);
	
	if(n>0 && n<30){
		for(i=0;i<n;i++)
		{
		scanf("%f",&arr[i]);
		} 		
	}	
	else{
		printf("Invalid input");
	}
	if(n<7){
		printf("%.2f",avg);
	}
		for(i=n-1;i>=0;i--){
		
		sum=sum+arr[i];
		x++;
		if(x==7){
			avg=sum/7;
			printf("%.2f",avg);
		}
		else{
			continue;
		}
	}
	avg=sum/n;
	printf("%.2f",avg);
    return 0;
}

#include<stdio.h>
int main (int argc, char* argv[] ){
    /* Write a program that reads in an int n where n<30. This is the number of input values.
    * Followed by n float inputs, one on each line 
@@ -11,9 +12,39 @@ int main (int argc, char* argv[] ){
    * 44.4
    * 47.0
    * Output: 
    * 0.00
    * 0.0
    * 44.53
    * Error checking value of n is not expected. 0 < n < 30 
    */
        */


        int n=0,i=0,x=0;
        float arr[30]={0.0};
        float avg = 0,sum=0;
        scanf("%d",&n);
        for(i=0; i<n;i++) {
            scanf("%f",&arr[i]);
        }
        if(n<7)
        {
         printf("%.2f",avg);   
        }

        for(i=0;i<n;i++){

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

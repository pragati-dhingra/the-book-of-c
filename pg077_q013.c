#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int num;
   printf("Input Month No : ");
   scanf("%d",&num);
   if(num==1)
   {
   
	       printf("Very 1st month of year:January\n");
	   }
	if(num==2)
	{
	
	       printf("Month of love:February\n");
	   }
	   
	if(num==3)
	{
	
	       printf("Month of my birthday:March\n");
	   }
	if(num==4){
	
	       printf("Month of making fool others:April\n");
	   }
	if(num==5)
	{
	
	       printf("Month of starting of summers:May\n");
	   }
	if(num==6){
	
	    
		   printf("Month of hottest:June\n");
	   }
	if(num==7)
{
		   	       printf("Month of Moonsoon:July\n");
	   }
	if(num==8)
{
		       printf("Month of Friendship:August\n");
	   }
	if(num==9)
{
			       printf("Month of bhai's bday:'September\n");
	   }
	if(num==10)
{
		   	       printf("Best Month of Outing:October\n");
	   }
	if(num==11)
{
			       printf("Month of Starting of winters: November\n");
	   }
	if(num==12)
	       {
		   printf("Perfect Month of marriage:December\n");
	   }
	if(num>12)
{
		   	       printf("Oops invalid Month number......");
	   }
      
  return 0;
}

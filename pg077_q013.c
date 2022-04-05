#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int num;
   
   scanf("%d", &num);
   if(num==1)
   {
   
	       printf("January");
	   }
	if(num==2)
	{
	
	       printf("February");
	   }
	   
	if(num==3)
	{
	
	       printf("March");
	   }
	if(num==4){
	
	       printf("April");
	   }
	if(num==5)
	{
	
	       printf("May");
	   }
	if(num==6){
	
	    
		   printf("Month of hottest:June");
	   }
	if(num==7)
{
		   	       printf("July");
	   }
	if(num==8)
{
		       printf("August");
	   }
	if(num==9)
{
			       printf("September");
	   }
	if(num==10)
{
		   	       printf("October");
	   }
	if(num==11)
{
			       printf("November");
	   }
	if(num==12)
	       {
		   printf("December");
	   }
	if(num>12)
{
		   	       printf("Invalid");
	}
	if(num<1)
	{
		printf("Invalid");
	}      
  return 0;
}

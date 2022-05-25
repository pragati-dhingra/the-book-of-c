#include <stdio.h>
int main (int argc, char* argv[] ){
  	  int month = 0;
	    scanf("%d", &month);
	     if(month < 1 || month > 12) {
	        printf("Invalid");
	    } else if(month==1){
	        printf("January");
	    }else if(month==2){
	        printf("February");
	    }else if(month==3){
	        printf("March");
	    }else if(month==4){
	        printf("April");
	    }else if(month==5){
	        printf("May");
	    }else if(month==6){
	        printf("June");
	    }else if(month==7){
	        printf("July");
	    }else if(month==8){
	        printf("August");
	    }else if(month==9){
	        printf("September");
	    }else if(month==10){
	        printf("October");
	    }else if(month==11){
	        printf("November");
	    }else if(month==12){
	        printf("December");
	    }
  return 0;
}

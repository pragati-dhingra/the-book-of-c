#include <stdio.h>

int main (int argc, char* argv[] ){
  int n;
  printf("the month number is");
  scanf("%d",&n);
  if(n==1){
    printf("january");
  }
  else if(n==2){
    printf("feburary");
  }
  else if(n==3){
    printf("march");
  }
  else if(n==4){
    printf("april");
  }
  else if(n==5){
    printf("may");
  }
  else if(n==6){
    printf("june");
  }
  else if(n==7){
    printf("july");
  }
  else if(n==8){
    printf("august");
  }
  else if(n==9){
    printf("september");
  }
  else if(n==10){
    printf("october");
  }
  else if(n==11){
    printf("november");
  }
  else if(n==12){
    printf("december");
  }
  else{
    printf("enter the valid number");
  }
  
  return 0
}

#include <stdio.h>

int main(int argc, char* argv[] ){
 
  int year=0;
  scanf("%d",&year);
  switch(year)
  {
    case 1975:
      printf("West Indies");
      break;
    case 1979:
      printf("West Indies");
      break;
    case 1983:
      printf("India");
      break;
    case 1987:
      printf("Australia");
      break;
    case 1992:
      printf("Pakistan");
      break;
    case 1996:
      printf("Sri Lanka");
      break;
    case 1999:
      printf("Australia");
      break;
    case 2003:
      printf("Australia");
      break;
    case 2007:
      printf("Australia");
      break;
    case 2011:
      printf("India");
      break;
    case 2015:
      printf("Australia");
      break;
    default:
      printf("Invalid input");
  }
  return 0;
}

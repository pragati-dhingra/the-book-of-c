#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program using switch case that takes year as input and prints the name of cricket world cup winning country for that year, 

a.	1975: West Indies
b.	1979: West Indies
c.	1983: India
d.	1987: Australia
e.	1992: Pakistan
f.	1996: Sri Lanka
g.	1999: Australia
h.	2003: Australia
i.	2007: Australia
j.	2011: India
k.	2015: Australia
If world cup was not played in the year entered by the user, program should print "Invalid input"
There should be no newlines after the printed output
Winners post 2015 are not required.
*/
  double year;
  printf("enter the year");
  scanf("%lf",&year);
  
  switch(year)
  {
    case 1975:
      printf("winner country is West Indies");
      break;
      
      case 1975:
      printf("winner country is West Indies");
      break;
      case 1979:
      printf("winner country is West Indies");
      break;
      case 1983:
      printf("winner country is West Indies");
      break;
      case 1987:
      printf("winner country is West Indies");
      break;
      case 1992:
      printf("winner country is West Indies");
      break;
      case 1996:
      printf("winner country is West Indies");
      break;
      case 1999:
      printf("winner country is West Indies");
      break;
      case 2003:
      printf("winner country is West Indies");
      break;
    case 2007:
      printf("winner country is West Indies");
      break;
      case 2011:
      printf("winner country is West Indies");
      break;
    default:
      printf("invalid year");
      
      
  
  return 0;
}

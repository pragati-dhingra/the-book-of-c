#include <stdio.h>

viod main (int argc, char* argv[] ){
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
  int y;
  printf("enter the year:");
  scanf("%d",&y);
  switch(y)
  {
    case 1975:("west indies");
      break;
    case 1979:("west indies");
      break;
    case 1983:("india");
      break;
    case 1987:("australia");
      break:
      case 1992:("pakistan");
      break;
    case 1996:("srilanka");
      break;
    case 1999:("australia");
      break;
    case 2003:("australia);
      break;
     case 2007:("australia);
      break;
    case 2011:("india");
      break;
     case 2015:("australia");
      break;
                default:
                printf("invalid data");
                }
                
               
  
  return 0,
}

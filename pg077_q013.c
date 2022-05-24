#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int n=0;
  scanf("%d",&month);
  if(n=1)
  {printf("January");
  }
  else if(n=2)
  {printf("February");
  }
  else if(n=3)
  {printf("March");
  } 
  else if(n=4)
  {printf("April");
  }
  else if(n=5)
  {printf("May");
  }
  else if(n=6)
  {printf("June");
  }
  else if(n=7)
  {printf("July");
  }
  else if(n=8)
  {printf("August");
  }
  else if(n=9)
  {printf("September");
  }
  else if(n=10)
  {printf("October");
  }
  else if(n=11)
  {printf("November");
  }
  else if(n=12)
  {printf("December");
  }
  
    return 0;
}

#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write an implementation of strncmp. 
    * Your program reads an int on a line by itself - this is the max number of chars to compare
    * Followed by string 1 on a line by itself, terminated by \n
    * Followed by string 2 on a line by itself, terminated by \n
    * and calls a function that prints
    * 0 if at most first n chars of both strings were equal
    * -1 if string 1 was smaller while comparing first n chars
    *  1 if  string 1 was bigger while comparing first n chars
    * notion of big or small is same as standard library strncmp function
    * do not use library strncmp function 
    * assume that input strings are <30 chars
    * If longer string is presented as input, use only first 29 chars
    * Include error checks for the value of n. It should be >0 and <30 
    * If value of n is outside this range then print output value as -2 instead of above values */
   char str1[20];
   char str2[20];
   int result;

   //Assigning the value to the string str1
   strcpy(str1, "hello");

   //Assigning the value to the string str2
   strcpy(str2, "helLO WORLD");

   //This will compare the first 3 characters
   result = strncmp(str1, str2, 3);

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }

   return 0;
}
   

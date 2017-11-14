/*
 * Joshua Bearden
 * CS2750 PA5
 * 09/11/17
 */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

//a function to check if a string is a number

int isnum(char* s)
{
   int i;

   //check each character in the string
   for(i = 0; i < strlen(s); i++)
   {
      //if the first character is a -, continue since it could be a negative integer
      if((i == 0) && (s[0] == '-'))
      {
        i++;
      }
      //if the character is not a digit, fail and return
      if (!isdigit(s[i]))
      {
         return 0;
      }
   }
   //if the loop ends without returning, it is a number
   return 1;
}
/*
 * Joshua Bearden
 * CS2750 PA5
 * 09/11/17
 */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

int isnum(char* s)
{
   int i;
   for(i = 0; i < strlen(s); i++)
   {
      
      if((i == 0) && (s[0] == '-'))
      {
        i++;
      }
      if (!isdigit(s[i]))
      {
         return 0;
      }
   }
   return 1;
}
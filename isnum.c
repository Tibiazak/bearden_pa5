/*
 * Joshua Bearden
 * CS2750 PA5
 * 09/11/17
 */

#include <ctype.h>

int isnum(char* s)
{
   int i;
   for(i = 0; number[i] != 0; i++)
   {
      if((i = 0) && s[0] == '-')
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
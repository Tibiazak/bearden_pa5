/*
 * Joshua Bearden
 * CS2750 PA5
 * 09/11/17
 */

#include <ctype.h>
#include <string.h>

int isnum(char* s)
{
   int i;
   printf("%s\n", s);
   for(i = 0; i < strlen(s); i++)
   {
      printf("%s\n", s[i]);
      /*
      if((i = 0) && s[0] == '-')
      {
         i++;
      }
      */
      if (!isdigit(s[i]))
      {
         printf("not a digit\n");
         return 0;
      }
   }
   return 1;
}
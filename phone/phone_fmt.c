/*
 * Joshua Bearden
 * CS2750 PA5
 * 14/11/17
 */

#include <stdio.h>
#include <ctype.h>

char * phone_fmt(char * num)
{
   int i = 0;
   int j = 0;
   char input[200];
   fgets(input, 200, stdin);
   for(i = 0; i < 200; i++)
   {
      if(j == 10)
      {
         return num;
      }
      if(isdigit(input[i]))
      {
         num[j] = input[i];
         j++;
      }
      else if((input[i] == "\n") || (input[i] == NULL))
      {
         return NULL;
      }
   }
   return NULL;
}
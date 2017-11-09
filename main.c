/*
 * Joshua Bearden
 * CS2750 PA5
 * 09/11/17
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> 
#include "isnum.h"

#define MAX 200 //set max amount of arguments

int main(int argc, char** argv)
{
   int total = 0;
   int i;
   int j;
   if(argc > MAX)
   {
      printf("Too many arguments! The most you can have is %d.\n", MAX);
      return 1;
   }
   else if(argc == 1)
   {
      printf("No arguments!\n");
      return 2;
   }

   //int loop, check if number, if yes add to total
   for(i = 1; i < argc; i++)
   {
      if(isnum(argv[i]))
      {
         total += atoi(argv[i]);
      }
   }
   printf("Total integers: %d\n", total);

   //string loop, check for substrings and print
   for(i = 1; i < argc; i++)
   {
      if(!isnum(argv[i]))
      {
         printf("%s is not a number\n", argv[i]);
         for(j = i+1; j < argc; j++)
         {
            if(strstr(argv[j], argv[i]) != NULL)
            {
               printf("%s is a substring of %s\n", argv[i], argv[j]);
            }
         }
      }
   }
   return 0;
}
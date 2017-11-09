/*
 * Joshua Bearden
 * CS2750 PA5
 * 09/11/17
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <isnum.h>
#include <string.h>

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

   //main loop
   //go through the command line args
   //check for integers, accumulate if int
   //check for substrings if string
   for(i = 1; i < argc; i++)
   {
      if(isnum(argv[i]))
      {
         total += atoi(argv[i]);
      }
      else
      {
         for(j = i+1; j < argc; j++)
         {
            if(strstr(argv[j], argv[i]))
            {
               printf("%s is a substring of %s\n", argv[i], argv[j]);
            }
         }
      }
   }
}
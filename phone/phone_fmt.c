/*
 * Joshua Bearden
 * CS2750 PA5
 * 14/11/17
 */

#include <stdio.h>
#include <ctype.h>

//a function that gets from input up to 200 characters and finds the first 10 digits
char * phone_fmt(char * num)
{
   //variable declaration
   int i = 0;
   int j = 0;
   char input[200]; //input storage array

   fgets(input, 200, stdin); //read input and store it

   //check every item in the input array, if it is a digit then
   //add it to the array passed to the function, otherwise skip it
   //if the item in the array is null or a newline, fail
   //if the end of the array is reached before 10 digits are, fail
   for(i = 0; i < 200; i++)
   {
      if(j == 10) //check to see if we've seen 10 digits
      {
         return num;
      }
      if(isdigit(input[i])) //check if the current char is a digit
      {
         num[j] = input[i];
         j++;
      }
      else if((input[i] == "\n") || (input[i] == NULL)) //check if we've exhausted input
      {
         return NULL;
      }
   }
   return NULL;
}
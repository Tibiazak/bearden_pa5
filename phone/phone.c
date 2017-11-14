/*
 * Joshua Bearden
 * CS2750 PA5
 * 14/11/17
 */

#include <stdio.h>

int main()
{
   char * number;
   printf("Please enter a phone number in any format: ");
   number = phone_fmt();
   if(number != NULL)
   {
      printf("%s\n", number);
      return 0;
   }
   else
   {
      printf("Error: not enough digits on input!");
      return 1;
   }
}
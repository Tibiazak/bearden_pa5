/*
 * Joshua Bearden
 * CS2750 PA5
 * 14/11/17
 */

#include <stdio.h>
#include "phone_fmt.h"

int main()
{
   char num[10];
   char * number = &num[0];
   printf("Please enter a phone number in any format: ");
   number = phone_fmt(&num[0]);
   if(number != NULL)
   {
      printf("%10s\n", num);
      return 0;
   }
   else
   {
      printf("Error: not enough digits on input!\n");
      return 1;
   }
}
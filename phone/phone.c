/*
 * Joshua Bearden
 * CS2750 PA5
 * 14/11/17
 */

#include <stdio.h>
#include "phone_fmt.h"

int main()
{
   int i = 0;
   char num[11];
   char * number = &num[0];
   num[10] = '\0';
   printf("Please enter a phone number in any format: ");
   number = phone_fmt(&num[0]);
   if(number != NULL)
   {
      printf("(%c%c%c) %c%c%c-%c%c%c%c\n", num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
      return 0;
   }
   else
   {
      printf("Error: not enough digits on input!\n");
      return 1;
   }
}
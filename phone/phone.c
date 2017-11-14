/*
 * Joshua Bearden
 * CS2750 PA5
 * 14/11/17
 */

#include <stdio.h>
#include "phone_fmt.h"

//A program that gets input containing up to 200 characters
//and formats the first 10 digits as a phone number.

int main()
{
   //variable declaration
   char num[11]; //array for the phone number
   char * number = &num[0];
   //num[10] = '\0';

   printf("Please enter a phone number in any format: ");
   number = phone_fmt(&num[0]); //calls the function phone_fmt to get input and select the digits

   //phone_fmt() returns a null pointer if it fails to find 10 digits
   if(number != NULL)
   {
      //if phone_fmt was successful, format output as a phone number and print
      printf("(%c%c%c) %c%c%c-%c%c%c%c\n", num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
      return 0;
   }
   else
   {
      printf("Error: not enough digits on input!\n");
      return 1;
   }
}
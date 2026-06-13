//Manas Gharat
//PRN: 2503033111372031

#include <stdio.h>
int main() {

   int pin;

   printf("Enter ATM PIN: ");
   scanf("%d", &pin);

   if (pin == 6457)
   {
   printf("PIN is Correct. Access Granted.");
   }
   else
   {
   printf("Incorrect PIN. Access Denied.");
   }
   return 0;
}  
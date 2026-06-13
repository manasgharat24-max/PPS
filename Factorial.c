//Manas Gharat
//PRN: 2503033111372031

#include<stdio.h>
int main() {

   int i;
   int n;
   int fact = 1;

   printf("Enter a number: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) { 
      fact = fact * i;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}   
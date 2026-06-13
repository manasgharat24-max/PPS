//Manas Gharat
//PRN: 2503033111372031

#include<stdio.h>
int fact(int n);

int main() {
   int n, ans;
   printf("Enter number:\t");
   scanf("%d", &n);

   ans = fact(n);
   printf("Answer is %d", ans);

   return 0;
}

int fact(int n) {
   if(n == 0 || n == 1) {
       return 1;
   }
   else {
       return n * fact(n - 1);
   }
}
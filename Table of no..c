//Manas Gharat
//PRN: 2503033111372031

#include<stdio.h>
int main(){

   int n,i;

   printf("Enter number: ");
   scanf("%d", &n);

   for(i=1;i<=10;i++) {
        printf("%d %d = %d\n", n, i, n*i);
    }
    return 0;
}   
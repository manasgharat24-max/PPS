//Manas Gharat
//PRN: 2503033111372031

#include<stdio.h>
int main(){

     int a[5] = {11, 12, 13, 94, 15};
     int b[5] = {57, 81, 71, 61, 24};
     int c[5];
     int i;

     for(i=0; i<=4; i++){
         c[i] = a[i] + b[i] ;
     }

    printf("Addition of two array is: ");
    for (i = 0; i <= 4; i++){
        printf("%d\t",c[i]);

    }
    return 0;
}   

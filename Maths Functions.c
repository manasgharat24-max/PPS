#include <stdio.h>
int main(){

    int a, b, add, sub, mul, div, mod;

    printf("Enter first number:\n");
    scanf("%d", &a);

    printf("Enter second number: \n");
    scanf("%d", &b);

    add = a + b;
    printf("Sum: %d\n", add);

    sub = a - b;
    printf("Difference: %d\n", sub);

    mul = a * b;
    printf("Product: %d\n", mul);

    div = a / b;
    printf("Quotient: %d\n", div);
    
    mod = a % b;
    printf("Modulus: %d\n", mod);

    return 0;
}    
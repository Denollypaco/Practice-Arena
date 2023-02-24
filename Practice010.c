// Program to multiply two floating point numbers.

#include <stdio.h>

int main()
{
    float a,b,multiply;
    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter second number:");
    scanf("%f", &b);
    {
        multiply = a*b;
        printf("product of numbers: %.3f", multiply);

        return 0; 
    }
}
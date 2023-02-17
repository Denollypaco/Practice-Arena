// Write a program to find quotient and remainder of two integers.

#include <stdio.h>
int main()
{
    int divisor,dividend,quotient,remainder;
    printf("Enter divisor:");
    scanf("%d", &divisor);
    printf("Enter dividend:");
    scanf("%d", &dividend);

    {
        quotient = divisor/dividend;
        printf("quotient: %d", quotient);
        remainder = divisor%dividend;
        printf("\nremainder: %d", remainder);

        return 0;
    }
}
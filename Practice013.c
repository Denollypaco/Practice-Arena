// Using the if statement, Write a program to display a number if it is positive

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("positive: %d", num);
    }
    printf("\nif statement is fun");

    return 0;
}
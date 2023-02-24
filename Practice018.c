/* A program to check whether a number is Positive, Negative, or Zero.
If the number is positive, Print The number is positive
If the number is negative, Print the number is Negative
If the number is zero, Print the number is 0.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if (num>0)
    {
        printf("The number is Positive");
    }
    else if (num<0)
    {
        printf("The number is Negative");
    }
    else{
        printf("The number is Zero");
    }
    return 0;
}
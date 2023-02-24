// Check if an integer is odd or even

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num%2==1)
    {
        printf("Number is odd\n");
    }
    else 
    {
        printf("%d is Even", num);

        return 0;
    }
}
//Program to relate two integers using ==, >=, or <= symbol using if else ladder

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two number:");
    scanf("%d%d", &num1,&num2);
    if (num1==num2)
    {
        printf("Result is: %d==%d", num1,num2);
    }
    else if (num1>=num2)
    {
        printf("Result is: %d>=%d", num1,num2);
    }
    else 
    {
        printf("Result is: %d<=%d", num1,num2);

        return 0;
    }
    
}
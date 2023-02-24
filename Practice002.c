// Print the cube of a given number.

#include <stdio.h>

int main()
{
    int num;
    int cube;
    printf("Enter the number: ");
    scanf("%d", &num);
    {
        cube = num*num*num;
        printf("cube of the number: %d", cube);
    }
    return 0;
}
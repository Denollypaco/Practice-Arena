// An example of an arithmetic operator and how it functions using all the arithmetic operators.

#include <stdio.h>

int main()
{
    int a = 9;
    int b = 4;
    int c;
    c = a+b;
    printf("a+b = %d\n", c);// c is 13
    c = a-b;
    printf("a-b = %d\n", c);// c is 5
    c = a*b;
    printf("a*b = %d\n", c);// c is 36
    c = a/b;
    printf("a/b = %d\n", c );// c is 2
    c = a%b;
    printf("Remainder of the division = %d", c);// c is 1

    return 0;
}
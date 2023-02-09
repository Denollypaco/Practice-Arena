// Examples of sizeof operator

#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;
    signed char s;
    long double l;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));
    printf("size of signed char=%lu byte\n", sizeof(s));
    printf("size of long double=%lu bytes\n",sizeof(l));

    return 0;
}

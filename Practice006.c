// An example on Assignment operators.

#include <stdio.h>

int main()
{
    int a = 5, c;
    c = a;
    printf("%d\n", c); // c is 5
    c += a;
    printf("%d\n", c); // c is 10
    c -= a;
    printf("%d\n", c); // c is 5
    c *= a;
    printf("%d\n", c); // c is 25
    c /= a;
    printf("%d\n", c); // c is 5
    c %= a;
    printf("%d", c); // c is 0


    return 0;
}
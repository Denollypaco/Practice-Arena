#include <stdio.h>

int main()
{
    int a = 5;
    if (!(a % 2 == 0))
    {
        printf("inside if");
    }
    else{
        printf("Inside else");
    }
    return 0;
}
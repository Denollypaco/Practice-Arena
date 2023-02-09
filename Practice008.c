// An example of a logical operator
#include <stdio.h>

int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);// result is 1 because is true

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);// result is 0 because is false

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);//result is 1 because one of the statement is true

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);// result is 0 because both statement is false

    result = !(a != b);
    printf("!(a != b) is %d \n", result);// result is 1 because the statement supports the NOT logical operator and makes it true

    result = !(a == b);
    printf("!(a == b) is %d \n", result);// result is 0 because the statement contradicts the NOT logical operator, making it false.

    return 0;
}

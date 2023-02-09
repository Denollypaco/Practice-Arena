// An example of a Relational operator

int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);// 5==5 is 1 because it is true
    printf("%d == %d is %d \n", a, c, a == c);// 5==10 is 0 because it is false
    printf("%d > %d is %d \n", a, b, a > b);// 5>5 is 0 because it is false
    printf("%d > %d is %d \n", a, c, a > c);// 5>10 is 0 because it is false
    printf("%d < %d is %d \n", a, b, a < b);// 5<5  is 0 because it is false
    printf("%d < %d is %d \n", a, c, a < c);// 5<10 is 1 because it is true
    printf("%d != %d is %d \n", a, b, a != b);//5!=5 is 0 because it is false
    printf("%d != %d is %d \n", a, c, a != c);//5!=10 is 1 because it is true
    printf("%d >= %d is %d \n", a, b, a >= b);// 5>=5 is 1 because it is true
    printf("%d >= %d is %d \n", a, c, a >= c);// 5>=10 is 0 because it is false 
    printf("%d <= %d is %d \n", a, b, a <= b); // 5<=5 is 1 because it is true
    printf("%d <= %d is %d \n", a, c, a <= c); // 5<=10 is 1 because it is true 

    return 0;
}
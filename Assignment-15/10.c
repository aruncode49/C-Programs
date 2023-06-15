#include <stdio.h>
int sum_N(int n);
int fact(int x);
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d", &number);
    printf("Sum of the series is %d", sum_N(number));
}
int sum_N(int n)
{
    int a, s = 0;
    for (a = 1; a <= n; a++)
        s = s + fact(a) / a;
    return s;
}
int fact(int x)
{
    int i, p = 1;
    for (i = 1; i <= x; i++)
        p = p * i;
    return p;
}
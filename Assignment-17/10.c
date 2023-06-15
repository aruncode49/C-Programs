// 10. Write a recursive function to calculate power of any number.
#include <stdio.h>
int power(int a, int b);
int main()
{
    int x, y, result;
    printf("enter number and power:");
    scanf("%d%d", &x, &y);
    result = power(x, y);
    printf("Power is %d", result);
    return 0;
}
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
// 9. Write a recursive function to count the digit of a given number.

#include <stdio.h>
int f1(int);
int main()
{
    int x, k;
    printf("enter a numbers: ");
    scanf("%d", &x);
    k = f1(x);
    printf("%d", k);
    return 0;
}

int f1(int n)
{
    if (n >0)
        return (1 + f1(n/10));
}
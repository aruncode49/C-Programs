// Write a function to check wheather a given number contains a given digit or not.
#include <stdio.h>
int digit_contains_or_not(int num, int d);

int digit_contains_or_not(int num, int d)
{
    while (num)
    {
        if (num % 10 == d)
            return 1;
        num /= 10;
    }
    return 0;
}

int main()
{
    int a, k;
    printf("enter number:");
    scanf("%d", &a);
    k = digit_contains_or_not(a, 9);
    if (k == 1)
        printf("%d contains digit", a);
    else
        printf("%d does'nt contains digit", a);
    return 0;
}
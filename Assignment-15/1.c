// Write a function to calculate LCM of two numbers.(TSRS)

#include <stdio.h>
int lcm(int, int);

int main()
{
    int x, y, k;
    printf("enter two numbers: ");
    scanf("%d%d", &x, &y);
    k = lcm(x, y);
    printf("LCM is %d", k);
    return 0;
}

int lcm(int a, int b)
{
    int l;
    for (l = a > b ? a : b; l <= a * b; l++)
    {
        if (l % a == 0 && l % b == 0)
            break;
    }
    return l;
}
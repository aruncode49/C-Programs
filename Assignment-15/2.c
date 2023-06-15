// Write a function to calculate HCF of two numbers: (TSRS)

#include <stdio.h>
int hcf(int, int);

int main()
{
    int x, y, k;
    printf("enter two numbers: ");
    scanf("%d%d", &x, &y);
    k = hcf(x, y);
    printf("HCF is %d", k);
    return 0;
}

int hcf(int a, int b)
{
    int h;
    for (h = a > b ? a : b; ; h--)
    {
        if (a%h==0 && b%h==0)
            break;
    }
    return h;
}
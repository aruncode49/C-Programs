// WAF to check wheater a given function is even or odd .Return 1 if even and return 0 if odd (TSRS)

#include <stdio.h>
int evenodd(int);
int main()
{
    int n, k;
    printf("enter number: ");
    scanf("%d", &n);
    k = evenodd(n);
    printf("%d", k);
    return 0;
}

int evenodd(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}
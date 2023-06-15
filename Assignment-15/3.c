// Write a functon to check a given number is prime or not.(TSRS)
#include <stdio.h>
int prime(int);
int main()
{
    int x, p;
    printf("enter number:");
    scanf("%d", &x);
    p = prime(x);
    if (p == 1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}

int prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 1;
    else
        return 0;
}
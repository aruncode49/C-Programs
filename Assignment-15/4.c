// Write a function to find the next prime number of a given number: (TSRS)

#include <stdio.h>
int prime(int);
int main()
{
    int a, p;
    printf("enter number: ");
    scanf("%d", &a);
    p = prime(a);
    printf("Next prime number is %d", p);
    return 0;
}

int prime(int x)
{
    int i, n;
    for (n = x + 1;; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
            break;
    }
    return n;
}
// Write a function to print first N prime numbers.(TSRN)

#include <stdio.h>
void prime(int);

int main()
{
    int p;
    printf("enter number: ");
    scanf("%d", &p);
    prime(p);
    return 0;
}

void prime(int x)
{
    int n, i;
    for (n = 2; x; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
        {
            printf("%d ", n);
            x--;
        }
    }
}
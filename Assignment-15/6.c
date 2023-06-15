// Write a function to print all prime numbers between two given numbers: (TSRN)

#include <stdio.h>
void prime(int, int);
int main()
{
    int x, y;
    printf("enter two number: ");
    scanf("%d%d",&x, &y);
    prime(x, y);
    return 0;
}

void prime(int a, int b)
{
    int i, n;
    for (n = a + 1; n < b; n++)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (i == n)
            printf("%d ", n);
    }
}
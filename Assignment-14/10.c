// Write a function to print all prime factor of a given number.

#include <stdio.h>
int prime_factor(int n);
int main()
{
    int a;
    printf("enter number: ");
    scanf("%d", &a);
    prime_factor(a);
    return 0;
}

int prime_factor(int n)
{
    int i;

    for (i = 2; n>1; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
}
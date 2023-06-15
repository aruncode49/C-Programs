// WAF to print first n odd natural number (TSRN)

#include <stdio.h>
void odd(int);
int main()
{
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    odd(x);
    return 0;
}

void odd(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("%d ", 2*i-1);
}
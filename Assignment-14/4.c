// WAF to print first N natural number (TSRN)

#include <stdio.h>
void natural(int);
int main()
{
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    natural(x);
    return 0;
}

void natural(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        printf("%d ", i);
}
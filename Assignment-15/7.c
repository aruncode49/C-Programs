// Write a function to print first N term of fibonacci series: (TSRN)

#include <stdio.h>
void fibonacci(int);
int main()
{
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    fibonacci(x);
    return 0;
}

void fibonacci(int n)
{
    int c, a = -1, b = 1, i;
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}
// WAF to print factorial of first n number (TSRS)

#include <stdio.h>
int fact(int); //functio declaration or prototype
int main()
{
    int f, x;
    printf("enter your number:");
    scanf("%d", &x);
    f = fact(x); // function call
    printf("factorial of %d is %d", x, f);
    return 0;
}

int fact(int n) // function definition
{
    int i, S = 1;
    for (i = 1; i <= n; i++)
        S = S * i;
    return S;
}
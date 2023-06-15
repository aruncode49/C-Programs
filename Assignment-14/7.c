// Write a function to calculate number of combination one can make from n items and r selected at a time.(TSRS)
#include <stdio.h>
int comb(int n, int r);
int fact(int n);

int main()
{
    int k;
    k=comb(4, 2);
    printf("number of combination is %d",k);
    return 0;
}

int comb(int n, int r)
{
    return fact(n) / fact(n - r) / fact(r);
}

int fact(int n) // function definition
{
    int i, S = 1;
    for (i = 1; i <= n; i++)
        S = S * i;
    return S;
}
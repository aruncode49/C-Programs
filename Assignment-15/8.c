#include <stdio.h>
void pascal_triangle(int n);
int fact(int x);
int combi(int n, int r);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    pascal_triangle(number);
    return 0;
}

void pascal_triangle(int n)
{
    int i, j, a = 0;
    for (i = 1; i <= n; i++)
    {
        int k = 1;
        int b = 0;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                if (k)
                    printf("%d", combi(i - 1, b++));
                else
                    printf(" ");
                k = 1 - k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

int fact(int x)
{
    int i, p = 1;
    for (i = 1; i <= x; i++)
        p = p * i;
    return p;
}
int combi(int n, int r)
{
    return fact(n) / fact(r) / fact(n - r);
}
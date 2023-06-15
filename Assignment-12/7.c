#include <stdio.h>
int main()
{
    int i, j, k, n, x;
    printf("enter value: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = 1;
        x = 1;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                if (k)
                {
                    printf("%d",x);
                    j < n ? x++ : x--;
                }
                else
                {   printf(" ");
                    if(j==n)
                    x--;
                }
                k = 1 - k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
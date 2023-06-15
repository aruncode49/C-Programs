#include <stdio.h>
int main()
{
    int a[5], b[5], i;
    printf("Enter values in array a[] : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    printf("Values in b[]\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", b[i]);

    return 0;
}
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        printf("%d\n", i*i*i);
    return 0;
}
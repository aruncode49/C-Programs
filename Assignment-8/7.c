#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number: ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
        printf("%d\n", 2*i);
    return 0;
}
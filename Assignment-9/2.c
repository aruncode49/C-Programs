// sum of first even natural number

#include<stdio.h>
int main()
{
    int i,n,S=0;
    printf("enter number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        S=S+2*i;
    printf("%d",S);

    return 0;
    
}
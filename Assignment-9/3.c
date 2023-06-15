//sum of first N odd natrual number

#include<stdio.h>
int main()
{
    int i,n,S=0;
    printf("enter number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        S=2*i-1+S;
    printf("%d",S);

    return 0;
    
}
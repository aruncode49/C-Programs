//sum of cubes of first N natrual number

#include<stdio.h>
int main()
{
    int i,n,S=0;
    printf("enter number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        S=S+i*i*i;
    printf("%d",S);

    return 0;
    
}
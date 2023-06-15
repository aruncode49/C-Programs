#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    printf((a%2)?("Odd"):("Even"));
    return 0;
    
}
#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
        printf("Divisible");
    else
        printf("Not Divisible");
    return 0; 
}
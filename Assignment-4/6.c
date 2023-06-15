#include<stdio.h>
int main()
{
    float inr,usd;
    printf("enter amount in inr: ");
    scanf("%f",&inr);   
    usd=(1/84.23)*inr;
    printf("USD=%0.2f$",usd);
    return 0;
}
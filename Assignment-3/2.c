#include<stdio.h>
int main()
{
    double a;
    printf("enter number: ");
    scanf("%lf, &a");
    printf("%dbyte", sizeof(a));
    return 0;
}
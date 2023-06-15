// 3. Write a program to calculate simple interest.
#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("enter p,r & t: ");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100.0;
    printf("Simple interest is %0.2f",si);
    return 0;
}
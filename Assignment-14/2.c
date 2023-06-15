// Write a function to calculate simple interest(TSRS)

#include<stdio.h>

float simpleInt(int,int,int);
int main()
{
    int p,r,t;
    float k;
    printf("enter principle amount, rate and time: ");
    scanf("%d%d%d",&p,&r,&t);
    k= simpleInt(p,r,t);
    printf("simple interest is %0.2f",k);
    return 0;

}
    float simpleInt(int x,int y,int z)
    {
        float si;
        si=x*y*z/100.0;
        return si;
    }
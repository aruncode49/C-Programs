// Write a function to calculate area of circle (TSRS)

#include<stdio.h>

float area(int);
int main()
{
    float k;
    int x;
    printf("Enter radius: ");
    scanf("%d",&x);
    k= area(x);
    printf("Area of circle is %0.2f",k);
    return 0;
}
    float area(int r)
    {
        float A;
        A=3.14*r*r;
        return A;
    }
// 9. Write a program to calculate area of rectangle. Input appropriate data from the user.
#include<stdio.h>
int main()
{
    int l,b,Area;
    printf("enter length and breath of the rectangle: ");
    scanf("%d%d",&l,&b);
    Area = l*b;
    printf("Area of rectangle is %d",Area);
    return 0;
}
// 4. Write a program to calculate volume of a cuboid.

#include<stdio.h>
int main()
{
    int l,b,h,vol;
    printf("enter length,breadth & height: ");
    scanf("%d%d%d",&l,&b,&h);
    vol=l*b*h;
    printf("Volume of cuboid is %d",vol);
    return 0;
}
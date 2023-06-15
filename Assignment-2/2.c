// 2. Write a program to calculate circumference of circle.

#include<stdio.h>
int main()
{
    float r,C;
    printf("enter radius of circle: ");
    scanf("%f",&r);
    C=2*3.14*r;
    printf("Circumference is %.2f having radius %.2f",C,r);
    return 0;
}
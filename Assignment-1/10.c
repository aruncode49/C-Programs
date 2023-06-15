//  10. WAP to find the area of circle. Take radius of circle from user as input and print the result in below given format.
//  Expected output format - "Area of circle is A having the radius R". Replace A with area & R with radius.

#include<stdio.h>
int main()
{
    float A,R;
    printf("Enter Radius of the circle: ");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("Area of circle is %.2f having the radius %.2f",A,R);
    return 0;
}
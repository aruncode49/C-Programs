// 1. Write a program to calculate average of three numbers. Numbers are given by the user.

#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("The avg of %d,%d & %d is %f",a,b,c,avg);
    return 0;
    }
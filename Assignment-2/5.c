// 5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 banans.

#include<stdio.h>
int main()
{
    int cp,sp;
    float profit;
    printf("enter cp: ");
    scanf("%d",&cp);
    printf("enter sp: ");
    scanf("%d",&sp);
    profit=((sp/12.0)*25)-((cp/12.0)*25);
    printf("Profit or loss is %f",profit);
    return 0;
}
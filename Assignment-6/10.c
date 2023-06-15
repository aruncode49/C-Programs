#include<stdio.h>
int main()
{
    int m;
    printf("enter month number:");
    scanf("%d",&m);

    if(m==2)
        printf("28 or 29");
    else if (m==4 || m==6 || m==9 || m==11)
        printf("30");
    else if (m>12)
        printf("Not a valid month");
    else
        printf("31");
    return 0;
}
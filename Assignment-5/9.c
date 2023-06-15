//Very Important Leap Year Checking.

#include<stdio.h>
int main()
{
    int y;
    printf("enter your year: ");
    scanf("%d",&y);
    if(y%4==0)
        if(y%100==0)
            if(y%400==0)
                printf("This is a Leap Year");
            else
                printf("Not a Leap Year");
        else
            printf("This is a Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}
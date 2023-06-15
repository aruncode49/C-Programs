// 10. WAP to take time as input in below given format and convert the time format and display the result as give below.
// User Input time format- "HH:MM"
// Output format- "HH hour and MM Minute"

#include<stdio.h>
int main()
{
    int hh,mm;
    printf("enter time: ");
    scanf("%d:%d",&hh,&mm);
    printf("%d hour and %d minute",hh,mm);
    return 0;
}
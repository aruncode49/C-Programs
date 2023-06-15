// 9. WAP to take date as an input in below given format and convert the date format and display the result as given below.
// User input date format - "DD/MM/YYYY"(27/11/2022)
// Output format - "DD-Day, MM-Month, YYYY- Year"(Day - 27, Month - 11, Year - 2022)

#include<stdio.h>
int main()
{
    int DD,MM,YYYY;
    printf("Enter date,month and year: ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("Day - %d, Month - %d, Year - %d", DD,MM,YYYY);
    return 0;
}
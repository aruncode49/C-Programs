#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("Upper Case");
    else
        printf("Lower Case");
    return 0;
}
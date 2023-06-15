#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("uppercase");
    else if (ch>=97 && ch<=122)
        printf("lower case");
    else if (ch>=48 && ch<=57)
        printf("digit");
    else
        printf("special character");
    return 0;
}
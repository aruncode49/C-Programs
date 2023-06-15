#include<stdio.h>
#include<ctype.h>
int main()
{
    int i;
    char str[50],x;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(i=0; str[i]; i++)
    {
        x=str[i];
        printf("%c",toupper(x));
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50],x;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=strlen(str); i>=0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
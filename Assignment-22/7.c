#include<stdio.h>
int character(char str[],int size);
int main()
{
    int r;
    char str[20];
    r=character(str,20);
    printf("%d",r);
    return 0;
}
int character(char str[],int size)
{
    char x;
    printf("Enter String: ");
    fgets(str,size,stdin);
    printf("Enter a character: ");
    scanf("%c",&x);
    for(int i=0; str[i]; i++)
    {
        if(str[i]==x)
            return i;
    }
    return (-1);
}
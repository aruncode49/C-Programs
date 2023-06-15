#include<stdio.h>
#include<ctype.h>
void lower(char str[],int size);
int main()
{
    char str[20];
    printf("Enter string: ");
    lower(str,20);
    return 0;
}

void lower(char str[],int size)
{
    fgets(str,size,stdin);
    for(int i=0; str[i];i++)
        printf("%c",tolower(str[i]));
}
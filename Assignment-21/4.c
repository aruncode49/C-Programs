#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0; str[i];i++)
    {
        if(str[i]==' ')
            count++;
    }
    printf("Space=%d",count);
    return 0;
}
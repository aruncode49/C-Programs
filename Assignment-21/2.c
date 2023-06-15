#include<stdio.h>
int main()
{
    int i,count=0;
    char x;
    char str[]="elephant are big";
    printf("Enter a character: ");
    scanf("%c",&x);
    for(i=0; str[i];i++)
    {
        if(str[i]==x)
            count++;
    }
    printf("%d",count);
    return 0;
}
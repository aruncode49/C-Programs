#include<stdio.h>
int main()
{
    int i;
    char str[]="Arun Jangra";
    for(i=0; str[i]; i++);
    printf("%d",i);
    return 0;
}
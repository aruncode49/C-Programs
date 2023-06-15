#include<stdio.h>
int main()
{
    int i,count=0;
    // char x;
    char str[]="hii how are you";
    // printf("Enter a character: ");
    // scanf("%c",&x);
    for(i=0; str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }
    printf("Vowels=%d",count);
    return 0;
}
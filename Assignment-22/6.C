#include <stdio.h>
int count_vowels(char str[], int size);
int main()
{
    char str[20];
    printf("Enter string: ");
    int x = count_vowels(str, 20);
    printf("vowels = %d",x);
    return 0;
}
int count_vowels(char str[], int size)
{
    int count=0;
    fgets(str,size,stdin);
    for(int i=0; str[i];i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;        
    }
    return count;
}
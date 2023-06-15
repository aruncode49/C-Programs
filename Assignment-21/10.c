#include <stdio.h>
int main()
{
    int i;
    char str[20], x;
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    printf("Enter a character: ");
    scanf("%c", &x);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == x)
        {
            printf("At %d", i + 1);
            break;
        }
    }
    return 0;
}
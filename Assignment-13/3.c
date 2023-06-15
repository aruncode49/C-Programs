#include <stdio.h>
#include<stdlib.h>
int main()
{
    while (1)
    {
        int x;

        printf("\nEnter day number: \n");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("A");
            break;
        case 3:
            printf("B");
            break;
        case 4:
            printf("C");
            break;
        case 5:
            printf("D");
            break;
        case 6:
            printf("E");
            break;
        case 7:
            printf("F");
            break;
        case 8:
            exit(0);
        default:
            printf("Please enter right day in a week");
            break;
        }
    }
    return 0;
}
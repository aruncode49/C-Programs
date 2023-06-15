#include <stdio.h>
#include<stdlib.h>
int main()
{
    while (1)
    {
        int x, a, b, r;
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: \n");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            r = a + b;
            printf("Sum is %d", r);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            r = a / b;
            printf("Division is %d", r);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            r = a - b;
            printf("Subtraction is %d", r);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            r = a * b;
            printf("Multiplication is %d", r);
            break;
        case 5:
            exit(0);

        default:
            printf("Please enter right choice");
            break;
        }
    }
    return 0;
}
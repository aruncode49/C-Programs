#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int x, i;
        printf("\n\n1.Factorial of a number\n");
        printf("2.Check Even or Odd\n");
        printf("3.Area of circle\n");
        printf("4.Sum of first N natural number.\n");
        printf("5.Exit\n");

        printf("\nEnter your choice: \n");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter a numbers: ");
            scanf("%d", &x);
            int f = 1;
            for (i = 1; i <= x; i++)
                f = f * i;
            printf("Factorial of %d is %d", x, f);
            break;
        case 2:
            printf("Enter a numbers: ");
            scanf("%d", &x);
            if (x % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%d", &x);
            float A;
            A = 3.14 * x * x;
            printf("Area of circle is %0.2f", A);
            break;
        case 4:
            printf("Enter a numbers: ");
            scanf("%d", &x);
            int s = 0;
            for (i = 1; i <= x; i++)
                s = s + i;
            printf("Sum of first %d terms is %d", x, s);
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
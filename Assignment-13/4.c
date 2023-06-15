#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int c, a, b, x;
        printf("\n\n1.Check wheather a given set of three numbers are length of an isoscles triangle or not.\n");
        printf("2.Check wheather a given set of three numbers are length of sides of a right angled triangle or not.\n");
        printf("3.Check wheather a given set of three numbers are equilateral triangle or not.\n");
        printf("4.Exit\n");

        printf("\nEnter your choice: \n");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a > 0 && b > 0 && c > 0)
            {
                if (a == b || b == c || a == c)
                    printf("These are the lengths of a isoscles triangle");
                else
                    printf("Not a sides of isoscles triangle");
            }
            break;
        case 2:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a > b && a > c)
            {
                if (a * a == b * b + c * c)
                    printf("Right Angle Triangle");
                else
                    printf("Not a right angle triangle");
            }
            if (b > a && b > c)
            {
                if (b * b == a * a + c * c)
                    printf("Right Angle Triangle");
                else
                    printf("Not a right angle triangle");
            }
            if (c > a && c > b)
            {
                if (c * c == a * a + b * b)
                    printf("Right Angle Triangle");
                else
                    printf("Not a right angle triangle");
            }

            break;
        case 3:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b && b == c && a == c)
                printf("Equilateral Triangle");
            else
                printf("not a equilateral triangle");
            break;
        case 4:
            exit(0);

        default:
            printf("Please enter right choice");
            break;
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int x, i,a,b,L,n, z, s = 0,l, h, V,p;
        printf("\n\n1.Calculate LCM of two numbers\n");
        printf("2.Calculate Sum of the digit of a number\n");
        printf("3.Volume of a cuboid\n");
        printf("4.Check wheather a given number is Prime or not\n");
        printf("5.Exit\n");

        printf("\nEnter your choice: \n");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            for (L = a > b ? a : b; L <= a * b; L++)
            {
                if (L % a == 0 && L % b == 0)
                    break;
            }
            printf("LCM is %d", L);
            break;
        case 2:
            printf("Enter a numbers: ");
            scanf("%d", &n);
            z = n;
            while (n)
            {
                z = n % 10;
                s = s + z;
                n = n / 10;
            }
            printf("Sum of the digit is %d", s);
            break;
        case 3:
            printf("Enter Length, Breadth & Height: ");
            scanf("%d%d%d", &l, &b, &h);
            V = l * b * h;
            printf("Volume of Cuboid is %d", V);
            break;
        case 4:
            printf("Enter a numbers: ");
            scanf("%d", &p);
            for (i = 2; i < p; i++)
            {
                if (p % i == 0)
                    break;
            }
            if (i == p)
                printf("Prime");
            else
                printf("Not Prime");
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
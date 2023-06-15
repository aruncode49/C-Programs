#include <stdio.h>
int main()
{
    int arr[10], s_even = 0, s_odd = 0, i;
    printf("enter numbers: ");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            s_even = s_even + arr[i];
        else
            s_odd = s_odd + arr[i];
    }
    printf("Sum of all even numbers is %d\n", s_even);
    printf("Sum of all odd numbers is %d", s_odd);
    return 0;
}
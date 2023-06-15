#include<stdio.h>
void rotate(int arr[], int size, int n, int d);
int main()
{
    int n_position, d_direction;
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    rotate(arr, size, n_position, d_direction);
    return 0; 
}

void rotate(int arr[], int size, int n, int d)
{
    int i,temp;
    printf("How many times you want to rotate your array : ");
    scanf("%d",&n);
    printf("Enter direction for your rotation : ");
    scanf("%d",&d);
    printf("Enter elements in your array: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    if(d==1) // for right rotation
    {
        while(n)   // how many times you want to rotate
        {
            temp=arr[size-1];
            for(i=size-1; i>0; i--)
                arr[i]=arr[i-1];           
            arr[i]=temp;
            n--;
        }
        printf("\n");
        printf("Elements after rotation: ");
        for(i=0; i<size; i++)
            printf("%d ",arr[i]);
    }
    else // for left rotation
    {
        while(n)   // how many times you want to rotate
        {
            temp=arr[0];
            for(i=0; i<size-1; i++)
                arr[i]=arr[i+1];           
            arr[i]=temp;
            n--;
        }
        printf("\n");
        printf("Elements after rotation: ");
        for(i=0; i<size; i++)
            printf("%d ",arr[i]); 
    }
}
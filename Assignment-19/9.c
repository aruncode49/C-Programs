#include<stdio.h>
void merge(int arr1[], int arr2[], int size);
int main()
{
    int s;
    printf("Enter size of both array: ");
    scanf("%d",&s);
    int a[s],b[s];
    merge(a,b,s);
    return 0;
}

void merge(int arr1[], int arr2[], int size)
{
    int i,j;
    printf("Enter elements in first array: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr1[i]);
    printf("Enter elements in second array: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr2[i]);
    int new_size;
    new_size= size+size;
    int new_arr[new_size];
    for(i=0,j=0; i<new_size,j<size; i++)
    {
        if(i<size)
            new_arr[i] = arr1[i]; 
        else
        {
            new_arr[i] = arr2[j];   
            j++;
        }
    } 
    printf("Elements in new array: \n");
    for(i=0; i<new_size; i++)
        printf("%d ",new_arr[i]);  
}
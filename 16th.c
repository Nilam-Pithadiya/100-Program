// WAP to sort an Array using Bubble sort.

#include <stdio.h>
void main()
{
    int arraySize;

    printf("Enter Array Size :");
    scanf("%d",&arraySize);

    int arr[arraySize],i,j,temp;

    printf("Enter Array Elements :\n");
    for(i=0;i<arraySize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array before sorting :\n");
    for(i=0;i<arraySize;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<arraySize;i++)
    {
        for(j=0;j<arraySize-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nArray after Sorting :\n");
    for(i=0;i<arraySize;i++)
    {
        printf("%d ",arr[i]);
    }
}
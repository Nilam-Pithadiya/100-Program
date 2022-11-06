//WAP to sort an Array using Selection sort.

#include <stdio.h>

void main()
{
    int arraySize;
    printf("Enter Array Size :");
    scanf("%d",&arraySize);

    int arr[arraySize],minj,minx,i,j;

	printf("Enter Array Elements :\n");
	for(i=0;i<arraySize;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Array Before Sorting :\n");
	for(i=0;i<arraySize;i++)
	{
		printf("%d ",arr[i]);
	}
    
	for(i=0;i<arraySize;i++)
	{
		minj = i;
		minx = arr[i];
		for(j=i+1;j<arraySize;j++)
		{
			if(minx > arr[j])
			{
				minj = j;
				minx = arr[j];
			}
		}
		arr[minj]=arr[i];
		arr[i]=minx;
	}

		printf("\nArray After Sorting :\n");
		for(i=0;i<arraySize;i++)
		{
			printf("%d ",arr[i]);
		}
	
}
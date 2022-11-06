#include <stdio.h>

void main()
{
    int arraySize;
    printf("Enter Array Size :");
    scanf("%d",&arraySize);
	
	int a[arraySize],i,temp,j;

	printf("Enter Array Elements :\n");
	for(i=1;i<=arraySize;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Array Before Sorting :\n");
	for(i=1;i<=arraySize;i++)
	{
		printf("%d ",a[i]);
	}

	for(i=2;i<=10;i++)
	{
		temp = a[i];
		j = i-1;
		while(temp <= a[j] && j >= 0)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = temp;

	}

	printf("\nArray After Sorting :\n");
	for(i=1;i<=arraySize;i++)
	{
		printf("%d ",a[i]);
	}
}
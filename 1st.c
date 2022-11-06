#include <stdio.h>

void main()
{
    int n,arr[n],i,sum=0;

    printf("Enter Array Size : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("Sum of Even Numbers = %d",sum);
}
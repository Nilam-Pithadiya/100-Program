#include <stdio.h>

void main()
{
    int n,i,j,num,ind;

    printf("Enter Array Size :");
    scanf("%d",&n);

    int a[n+1];
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array Elements :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] : %d\n",i,a[i]);
    }

    printf("Enter Element : ");
    scanf("%d",&num);
    printf("Enter Index : ");
    scanf("%d",&ind);

    for(i=0;i<=n;i++)
    {
        if(ind == i)
        {
            for(j=n;j>=i;j--)
            {
                a[j] = a[j-1];
            }
            a[i] = num;
        }
    }
    for(i=0;i<=n;i++)
    {
        printf("a[%d] : %d\n",i,a[i]);
    }

}
#include <stdio.h>

void main()
{
    int n,i,j,k;

    printf("Enter n :");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=2*i-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
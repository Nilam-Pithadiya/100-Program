#include <stdio.h>

void main()
{
    int n,i,j,k,space=0;

    printf("Enter n :");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        space += 2;
    }


}
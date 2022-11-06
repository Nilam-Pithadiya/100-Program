#include <stdio.h>

void main()
{
    int n,i,j,k,m,odd=1;
    char c='A';

    printf("Enter n :");
    scanf("%d",&n);
    m=n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            if(i%2!=0)
            {
                printf("%d ",odd++);
            }
            else
            {
                printf("%c ",c++);
            }
            
        }
        m--;
        printf("\n");
    }
}
#include <stdio.h>

void main()
{
    int n1,n2,i,j;

    printf("Enter n1:");
    scanf("%d",&n1);
    printf("Enter n2:");
    scanf("%d",&n2);
    printf("Prime numbers between %d and %d :\n",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        int flag = 0;
        if(i < 2)
        {
            continue;
        }
        
        if(i==2)
        {
            printf("%d,",i);
            continue;
        }
        for(j=2;j<=i/2;j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d,",i);
        }
    }
}
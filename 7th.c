#include <stdio.h>

void main()
{
    int n,n1=0,n2=1,i,n3;
    printf("Enter n :");
    scanf("%d",&n);

    printf("%d,%d,",n1,n2);
    for(i=1;i<=n;i++)
    {
        n3 = n1 + n2;
        printf("%d,",n3);
        n1 = n2;
        n2 = n3;
    }

}
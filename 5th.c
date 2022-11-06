#include <stdio.h>

void main()
{
    int n,i,ans=0;

    printf("Enter n :");
    scanf("%d",&n);

    while(n>0)
    {
        i = n%10;
        ans = ans + i;
        n = n/10;
    }
    printf("Sum of Digits = %d",ans);
}
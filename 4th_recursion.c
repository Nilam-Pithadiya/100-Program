#include <stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("%d Factorial is = %d ",n,fact(n));
}

int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}
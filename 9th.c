#include <stdio.h>

void main()
{
    int n;

    printf("Enter Number :");
    scanf("%d",&n);

    if((n & 1)== 0)
    {
        printf("%d is Even Number! \n",n);
    }
    else
    {
        printf("%d is Odd Number! \n",n);
    }
}
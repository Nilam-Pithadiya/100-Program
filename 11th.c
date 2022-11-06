#include <stdio.h>

void main()
{
    int n,i,temp,sum=0;

    printf("Enter Number :");
    scanf("%d",&n);
    temp = n;

    while(n>0)
    {
        i = n%10;
        sum = sum + (i*i*i);
        n = n/10;
    }

    if(sum == temp)
    {
        printf("%d is Armstrong Number!\n",temp);
    }
    else
    {
        printf("%d is Not a Armstrong Number!\n",temp);
    }


}
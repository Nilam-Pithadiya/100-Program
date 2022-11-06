#include <stdio.h>

void main()
{
    int num,sum=0,temp,a=1,p=0;

    printf("Enter Decimal Number : ");
    scanf("%d",&num);
    temp = num;
    while(num > 0)
    {
        p=num%2;
        sum=sum+(a*p);
        num=num/2;
        a*=10;
    }
    printf("Binary Number of %d is : %d",temp,sum);
}
#include <stdio.h>
#include <math.h>
void main()
{
    int num,ans=0,i,base=1,temp;

    printf("Enter Binary Number :");
    scanf("%d",&num);
    temp = num;

    while(num > 0)
    {
        i = num % 10;
        ans += i*base;
        num = num/10;
        base=base*2;
    }
    printf("Decimal Number of %d is : %d ",temp,ans);
}
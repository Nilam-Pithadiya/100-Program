#include <stdio.h>
int sumOfDigits(int n);
void main()
{
    int n;
    printf("Enter Number :");
    scanf("%d",&n);

    printf("Sum of Digits = %d",sumOfDigits(n));
}

int sumOfDigits(int n)
{
    int i,ans=0;
    while(n>0)
    {
        i = n%10;
        ans+=i;
        n=n/10;
    }
    return ans;
}
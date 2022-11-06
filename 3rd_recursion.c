#include <stdio.h>
int factor(int n,int i);

void main()
{
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    printf("Factors of %d are :",n);
    printf("%d,",factor(n,1));
}

int factor(int n,int i)
{
    if(n%i==0)
    {
        printf("%d,",i);
    }
    factor(n,i+1);
}
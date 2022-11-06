#include <stdio.h>

void main()
{
    int n,i,Ocount=0,Ecount=0;
    printf("Enter n :");
    scanf("%d",&n);

    while(n>0)
    {
        i = n%10;
        if(i%2==0)
            Ecount++;
        else
            Ocount++;
        n = n/10;
    }
    printf("\nNumber of Odd digits in Given Number : %d",Ocount);
    printf("\nNumber of Even digits in Given Number : %d",Ecount);
}
#include <stdio.h>

void main()
{
    
    int n,i,num,min=0,max=0,sum=0,count=0;
    float avg;
    printf("Enter size :");
    scanf("%d",&n);

    printf("Numbers :\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num > max)
        {
            max = num;
        }
        if(i==1)
        {
            min = num;
        }
        if(num < min)
        {
            min = num;
        }
        sum = sum + num;
        count++;
    }
    avg = (float)sum/n;
    printf("Min :%d",min);
    printf("\nMax :%d",max);
    printf("\nSum :%d",sum);
    printf("\nAvg :%f",avg);
}
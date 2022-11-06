#include <stdio.h>

void main()
{
    int a[5] = {10,4,6,9,2};
    int deleteEle,i,j,found = 0;

    printf("Enter Element Which you want to delete : ");
    scanf("%d",&deleteEle);

    for(i=0;i<5;i++)
    {
        if(a[i] == deleteEle)
        {
            found = 1;
            for(j=i;j<5;j++)
            {
                a[j] = a[j+1];
            }
        }
    }
    if(found == 1)
    {
        for(i=0;i<5-1;i++)
        {
            printf("a[%d] : %d\n",i,a[i]);
        }
    }
    else
    {
        printf("Element Not Found!");
    }
    
    
}
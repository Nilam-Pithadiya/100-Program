#include <stdio.h>
#include <math.h>

void main()
{
    int Base,powe,i,ans=0,j,temp;

    printf("Enter Base :");
    scanf("%d",&Base);
    printf("Enter Power :");
    scanf("%d",&powe);
    temp=powe -1;
    for(i=1;i<=Base;i++)
    {
        if(powe == 2)
        {
            ans += Base;
        }  
    }
    if(powe != 2)
    {
        j = pow(Base , (powe-1));
        printf("%d \n",j);
    }
    for(i=1;i<=Base;i++)
    {
        if(powe != 2)
        {
            ans += j;
        }  
    }
    printf("Ans = %d",ans);
}
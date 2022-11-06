#include <stdio.h>
void main()
{
    int arow,acolumn,i,j,k,brow,bcolumn,sum=0;
    int a[arow][acolumn],b[brow][bcolumn],product[arow][bcolumn];
    
    printf("Enter the rows and columns of the matrix a :");
    scanf("%d %d",&arow,&acolumn);
    printf("Enter the elements of matrix a :\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acolumn;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b :");
    scanf("%d %d",&brow,&bcolumn);
    if(brow != acolumn)
    {
        printf("Sorry! Matrix multiplication is not possible.");
    }
    else
    {
        printf("Enter the elements of matrix b :\n");
        for(i=0;i<brow;i++)
        {
            for(j=0;j<bcolumn;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            for(k=0;k<brow;k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant Matrix : \n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            printf("%d",product[i][j]);
        }
        printf("\n");
    }

}
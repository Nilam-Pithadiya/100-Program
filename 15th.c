// WAP to convert a decimal number to BCD.

#include <stdio.h>

void main()
{
    int decimalNum,rev=0,num,temp;

    printf("Enter Number :");
    scanf("%d",&decimalNum);
    temp = decimalNum;
    if(decimalNum == 0)
    {
        printf("0000\n");
    }

    while(decimalNum > 0)
    {
        rev = rev * 10 + (decimalNum % 10);
        decimalNum /= 10;
    }

    printf("BCD of Decimal Number %d is : ",temp);
    while(rev > 0)
    {
        num = rev % 10;
        switch(num)
        {
            case 0 :
                printf("0000 ");
                break;
            case 1 :
                printf("0001 ");
                break;
            case 2 :
                printf("0010 ");
                break;
            case 3 :
                printf("0011 ");
                break;
            case 4 :
                printf("0100 ");
                break;
            case 5 :
                printf("0101 ");
                break;
            case 6 :
                printf("0110 ");
                break;
            case 7 :
                printf("0111 ");
                break;
            case 8 :
                printf("1000 ");
                break;
            case 9 :
                printf("1001 ");
                break;
        }
        rev = rev/10;
    }
    if(temp % 10 == 0)
    {
        printf("0000");
    }
}
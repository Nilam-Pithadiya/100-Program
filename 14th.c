#include <stdio.h>
#include <stdlib.h>

void main()
{
    int h,m,h_angle,m_angle,net_angle,ans;
    printf("Enter Hour :");
    scanf("%d",&h);
    if(h<0 || h>12)
    {
        printf("\nEnter valid hour value!\n");
    }
    printf("Enter Minute :");
    scanf("%d",&m);
    if(m<0 || m>60)
    {
        printf("\nEnter valid minute value!\n");
    }
    h_angle = (h*60 + m)*0.5;
    m_angle = (m*6);
    net_angle = abs(h_angle - m_angle);
    if(360 - net_angle > net_angle)
    {
        printf("Angle between %d:%d = %d",h,m,net_angle);
    }
    else
    {
        printf("Angle between %d:%d = %d",h,m,(360 - net_angle));
    }

    



}
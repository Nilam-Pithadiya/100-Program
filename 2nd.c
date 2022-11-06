#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = { "apple\n" };
    int i=0,j=strlen(str)-1,flag=0;

    while(j > i)
    {
        if(str[i++] != str[j--])
        {
            printf("\n%sGiven String is Not a Palindrom!",str);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n%sGiven String is a Palindrom!",str);
    }
    
}
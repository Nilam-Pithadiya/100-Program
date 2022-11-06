#include <stdio.h>
int fibonacci(int );
void main()
{
    int n,n1=0,n2=1;
    printf("Enter n :");
    scanf("%d",&n);

    printf("Fibonaci Series :");
    printf("%d,%d,",0,1);
    fibonacci(n-2);
    //printf("%d,",fibonacci(n-2));
}

int fibonacci(int n)
{
    static int i,n3,n1=0,n2=1;
    if(n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d,",n3);
        fibonacci(n - 1);
    }

}
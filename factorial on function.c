#include<stdio.h>
int factorial(int);
main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=factorial(a);
    printf("the factorial value is %d\n",b);
}
int factorial(int p)
{
    int i,fact=1;
    for(i=1;i<=p;i++)
    {
        fact=fact*i;
    }
    return fact;
}

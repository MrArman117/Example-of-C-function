#include<stdio.h>
void number(int);
main()
{
    number(1);
}
number(int a)
{
    if(a<=10)
    {
        number(a+1);
        printf("%d ",a);
    }
}

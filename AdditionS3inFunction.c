
#include<stdio.h>
void addition(void);
main()
{
    int a,b,c,d;

    addition();
}
void addition()
{
    int sum,a,b;
    printf("Enter two integer value for addition: ");
    scanf("%d %d",&a,&b);
    printf("\n");

    sum=a+b;
    printf("The result of two integer is: %d",sum);
    printf("\n");
}

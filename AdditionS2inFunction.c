#include<stdio.h>
int addition(void);
main()
{
    int a,b,c,d;

    c=addition();

    printf("The addition of two integer value is : %d \n",c);
}
int addition()
{
    int sum,a,b;
    printf("Enter to integer value: ");
    scanf("%d %d",&a,&b);
    printf("\n");
    sum=a+b;
   return sum;
}


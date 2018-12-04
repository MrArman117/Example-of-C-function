#include<stdio.h>
int addition(int,int);
main()
{
   int a,b,c,d;
   printf("Enter any two integer for addition:\n");
   scanf("%d %d",&b,&c);
   a=addition(b,c);
   printf("The Addition of Two integer is %d\n",a);
}
int addition(int m, int n)
   {
      int sum;
      sum=m+n;
      return sum;
   }

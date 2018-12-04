#include<stdio.h>
int prime(int);
main()
{
   int a,b,c;
   printf("Enter any number for check prime number in function:\n");
   scanf("%d",&a);
   b=prime(a);
   if(b==1)
    printf("%d is Prime Number",a);
   else printf("%d is Not Prime Number",a);
   return 0;
}
int prime(int m)
{
   int i,j,k=1;
   for (i=2;i<=sqrt(m);i++)
   {
      if (m%i==0)
      {
         k=0;
         break;
      }
      else
      k=1;
   }
   return k;
}

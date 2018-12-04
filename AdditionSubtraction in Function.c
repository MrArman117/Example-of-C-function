#include<stdio.h>
void addition(int,int);
main()
{
   int a,b,c,d;
   printf("Enter two integer for Addition & subtraction using function:\n");
   scanf("%d %d",&b,&c);
   addition(b,c);
   d=b-c;
   printf("Subtraction of the value: %d\n",d);
}
   void addition(int m, int n)
{
   int sum;
   sum=m+n;
   printf("Addition of the value:  %d \n\n",sum);
}
///      #include<stdio.h>
///      int addition(void);
///      main()
///      {
   ///   int a,b,c,d,e;

   ///   e=addition();

   ///   printf("%d\n",a);
///      }
  ///    int addition()
///      {
  ///    int sum,a,b;
 ///     scanf("%d %d",&a,&b);
  ///    sum=a+b;
 ///     return sum;
///      }



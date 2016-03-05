#include<stdio.h>
#include<math.h>
int main()
{
  float x0,x1,a,f1,f2,f3;
  x0=-10;
  x1=10;
  a=(x0+x1)/2;
  do
  {
   f1=((2*x0-4)*x0+3)*x0-6;
   f2=((2*x1-4)*x1+3)*x1-6;
   f3=((2*a-4)*a+3)*a-6;
   if ((f1*f3)<0) x0=x0;x1=a;a=(x1+x0)/2;
   if((f2*f3)<0)  x0=x1;x1=a;a=(x1+x0)/2;
  }while(fabs(x0-x1)>=1e-5);
   printf("%5.2f\n",x1);
  return 0;
 } 

#include<stdio.h>
int main()
{
   float m,b,c,d;
   int a;
   printf("enter a:");
   scanf("%d",&a);
    do
     {b=1/2*(c+a/c);
      d=1/2*(b+a/b);
     m=b-d;
     c=d;
      }
   while((fabs(m))>1e-5);
   printf("x=%f\n",b);
   return 0;
}
 

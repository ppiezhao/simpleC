#include<stdio.h>
int main()
{
   float m,n,i,x,y;
   float s=0;
    m=2.0,n=3.0,x=1.0,y=2.0;
   for(i=1;i<=10;i++)
    {s=m/x+n/y+s;
     m=m+n;
     n=n+m;
     x=x+y;
     y=y+x;
   printf("%f\t",s);
    }
   printf("s=%f\n",s);
   return 0;
 } 

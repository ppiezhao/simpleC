#include <stdio.h>
int main()
{
  int a,b,c,d,m,n,e,x,y,z;
  printf("enter a,b,c,d:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if( a>b)  
     m=a,a=b;
   else 
     m=b,a=a;
   if( m>c)
     m=m,n=c;
    else
     m=c,n=m;
   if (m>d)
   m=m,x=d;
  else
   m=d,x=m;
  if (a>n) 
  y=a,a=n;
  else
  y=n,a=a;
  if (y>x)
  z=y,y=x;
  else 
  z=x,y=y;
  if (y>a) 
  e=y,a=a;
  else
  e=a,a=y;
 printf("cong xiao dao da:%d %d %d %d\n",a,e,z,m);
 return 0;
}

#include <stdio.h>
int main ()
{
  float a,b,c,m,n,l,t;
  scanf("%f%f%f",&a,&b,&c);
  if (a>b) m=a,n=b;
   else  m=b,n=a;
  if  (m>c) l=m,m=c;
    else  l=c,m=m;
  if  (m<n)  t=m,n=n;
  else   t=n,n=m;
  printf("%f%f%f\n",t,n,l);
  return 0;
}


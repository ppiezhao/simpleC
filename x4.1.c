#include <stdio.h>
int main()
{int a,b,c,m;
  printf("enter a,b,c:");
  scanf("%d,%d,%d",&a,&b,&c);
  if(a>b) m=a;
  else  m=b;
  if(m>c) m=m;
  else   m=c;
  printf("the max is %d\n",m);
  return 0;
 }
 

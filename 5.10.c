#include <stdio.h>
#include <math.h>
int main()
{
  int n,i,k,m=0;
  for (n=101;n<200;n++)
   {
   k=sqrt(n);
   for(i=2;i<=k;i++)
    if(n%i==0) break;
   if(i>=k+1 )
   { printf("%d\t",n); 
    m=m+1;
    if(m%3==0)printf("\n");
   } 
    }
  return 0;
}


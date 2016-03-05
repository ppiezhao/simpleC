#include<stdio.h>
int main()
{
  int i,m=0,a,b,c,d;
  for(i=100;i<=999;i++)
    {a=i/100;
     b=i%100;
     c=b/10;
     d=b%10;
     if(i!=pow(a,3)+pow(c,3)+pow(d,3)) continue;
     printf("%d\t",i);
     m=m+1;
    if(m%10==0) printf("\n");
     } 
   return 0;
}
  

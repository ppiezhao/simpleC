#include<stdio.h>
int main()
{
  int a=0,b=0,m=0,n=0,i;
  float c=0,s;
  for(i=1;i<=100;i++)
   {a=a+i;
    printf("a=%d\t",a);
   m=m+1;
   if(m%10==0) printf("\n"); } 
 for(i=1;i<=50;i++)
    {b=b+pow(i,2);
    printf("b=%d\t",b);
   n=n+1;
   if(n%10==0) printf("\n"); } 
  for(i=1;i<=10;i++)
    {c=c+1.0/i;
    printf("c=%f\t",c);
   }
  s=a+b+c;
  printf("s=%lf\n",s);
  return 0;
}       

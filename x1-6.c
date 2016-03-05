#include<stdio.h>
int main()
{
 int m=0;
 long a=0,i,s=1;
  for(i=1;i<=20;i++)
   {
     s=s*i;
     a=a+s;
  printf("a=%ld\ts=%ld\t",a,s);
  m=m+1;
  if (m%3==0) printf("\n");
    }
  printf("n! de he=%ld\n",a);
 return 0;
 }

#include<stdio.h>
int main()
{
   float a,b=0,c;
   int i,n;
   a=100.0;
  printf("enter n:");
  scanf("%d",&n);
   for(i=1;i<=n;i++)
     { b=b+a;
     a=a/2;
     }
   printf("di %d ci luo di shi,gong jin guo %f\t m,di %d ci fan tan %f\n",n,b,n,a);
   return 0;
} 

#include <stdio.h>
int main()
{
  int n,i=1;
  for(n=100;n<200;n++,i++)
{   if( n%3==0)
   continue;
   printf("%d\t",n);
  if( i%6==0)
  
 printf("\n");
 }
   printf("\n");
 return 0;
}


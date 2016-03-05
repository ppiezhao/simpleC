#include<stdio.h>
int main()
{
  int i,s=0,n,a;
  printf("enter n,a:");
  scanf("%d%d",&n,&a);
  for(i=0;i<=n-1;i++) 
    {
     s=2*s+a*pow(10,i);
     printf("%d\t",s);
     }
  printf("s%d=%d\n",n,s);
  return 0;
}


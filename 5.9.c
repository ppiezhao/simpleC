#include <stdio.h>
#include <math.h>
int main()
{
  int n,i,k;
  printf("enter n:");
  scanf("%d",&n);
  while (n<3) 
  {
  printf("enter n:");
  scanf("%d",&n);
  }
 i=sqrt(k);
 for(i=2;i<=n-1;i++)
 if( n%i==0) break;
 if (i<n) printf("%d is not a shusu\n",n);
 else printf("%d is  a shusu\n",n);
  return 0;
}


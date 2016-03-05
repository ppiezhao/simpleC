#include<stdio.h>
int main()
{
  int i,j,m,n,max,a[3][4];
 printf("enter a array:\n");
  for(i=0;i<=2;i++)
   { for(j=0;j<=3;j++)
     scanf("%d",&a[i][j]);
   }
 printf("the  array:\n");
  for(i=0;i<=2;i++)
   { for(j=0;j<=3;j++)
     printf("%5d",a[i][j]);
 printf("\n");
} printf("\n");
 max=a[0][0];
   m=0;
   n=0;
 for(i=0;i<=2;i++)
   { for(j=0;j<=3;j++)
    if(a[i][j]>max) 
    {max=a[i][j];
     m=i;
     n=j;
    }
   }
  printf("the max number: the hang: the lie:\n");
  printf("%5d,%5d,%5d\n",max,m,n);
  return 0;
}

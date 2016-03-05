#include<stdio.h>
int main()
{
 int i,j,k,a[10];
 printf("input ten numbers:\n");
 for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  for(j=0;j<10;j++)
   for(i=0;i<9-j;i++)
   if( a[i]>a[i+1])
{ k=a[i];a[i]=a[i+1];a[i+1]=k;
}    
printf("the sort numbers: \n");
 for(i=0;i<10;i++)
 printf("%4d",a[i]);
 printf("\n");
 return 0;
}


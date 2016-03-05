#include<stdio.h>
int main()
{
  int m,n;
  printf("enter m,n:");
  scanf("%d%d",&m,&n);
  while(m<1e-6||n<1e-6)
    {
  printf("enter m,n:");
  scanf("%d%d",&m,&n);
    }
  ;

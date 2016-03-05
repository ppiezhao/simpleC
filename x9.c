#include <stdio.h> 
#include<math.h>
int main()
{
  int x,i=0,m;
  printf("enter x:");
  scanf("%d",&x);
 while(x<=1e-6||x>100000)
{
  printf("enter x:");
  scanf("%d",&x);
}
 printf("yinxushu:");
 while(x>1)
{
 m=x%10; 
 x=x/10;
 i++;
 printf("%d",m);  
} 
 printf("ta shi %d  wei shu\n ",i);
return 0;
} 

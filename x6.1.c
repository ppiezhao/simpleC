#include <stdio.h>
int main()
{
   int x,y;
  printf("enter x:");
  scanf("%d",&x);
  if(x<1)
    y=x;  
   else if(x>=1 && x<10)
    y=x*2-1;
   else 
    y=3*x-11;
  printf("y=%d\n",y);
  return 0;
}
 
     

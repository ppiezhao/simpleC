#include <stdio.h>
int main ()
{
#define P 10000 
 int I,i;
float y;
  printf("enter I:");
  scanf("%d",&I);
  while (I<=1e-6)
{
  printf("enter I:");
  scanf("%d",&I);
}
 if (I>=10*P) i=10;
  else  i=I/P; 
  switch(i)
  {
   case 0:y=I*0.1 ;break;
   case 1: y=P*0.1+(I-P)*0.075 ;break;
   case 2:
   case 3:y=P*0.1+P*0.075+(I-2*P)*0.05 ;break;
   case 4:
   case 5: y=P*0.1+P*0.075+2*P*0.05+(I-P)*0.03 ;break;
   case 6:
   case 7:
   case 8:
   case 9: y=P*0.1+P*0.075+2*P*0.05+2*P*0.03+(I-P)*0.15 ;break; 
   case 10: y=P*0.1+P*0.075+2*P*0.05+2*P*0.03+4*P*0.15+(I-P)*0.01 ;break;
  }
 printf("jiangjin y=%f\n",y);
  return 0;
}
   

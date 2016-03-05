#include <stdio.h>
int main ()
{ 
   int a,b;
  printf("enter fenshu:");
  scanf("%d",&a);
 while(a<1e-6||a>100)
{  
  printf("enter fenshu:");
  scanf("%d",&a);
}
 if(a<60) b=5;
 else
  b=a/10;
  switch(b)
 { 
  case 5:printf("gread is E\n");break;
  case 6:printf("gread is D\n");break;
  case 7:printf("gread is C\n");break;
  case 8:printf("gread is B\n");break;
  case 9:
  case 10:printf("gread is A\n");break;
 }
  return 0;
}  

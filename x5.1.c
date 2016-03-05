#include <stdio.h>
#include <math.h>
int main()
{ 
 float s; 
 int c;
  printf("please enter a shu:"); 
 scanf("%d",&c);
while(c<=1e-6||c>=1000)
{ 
  printf("please enter a shu:"); 
 scanf("%d",&c);
}
   s=sqrt(c);
 printf("%3.0f\n",s);
 return 0;
} 

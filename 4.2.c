#include <stdio.h>
int main()
{ 
  float a,b,c;
 scanf("%f%f",&a,&b);
 if (a>b) c=a,b=b;
 else c=b,b=a;
  printf("anzhicongxiaodaodapailiewei%f  %f\n",b,c);
 return 0;
}

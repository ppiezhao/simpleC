#include<stdio.h>
int main()
{
  int m=0,n=0,t=0,x=0;
  char c;
  c=getchar();
  while (c!='\n')
  { if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))  m=m+1;
     else if(c>='0'&&c<='9') t=t+1;
     else if(c==' ' ) n=n+1;
     else x=x+1;
     c=getchar();
  } 
   printf("yin wen zi mu de ge shu:%d\nkong ge de ge shu:%d\nshu zi de ge shu:%d\nqi ta zi fu de ge shu:%d\n",m,n,t,x);
 return 0;
}

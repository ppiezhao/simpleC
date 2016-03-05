#include<stdio.h>
int main()
{
  int i,j,a,b,c,d,m,n,l,p;
  float k;
  for(i=8080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080808080;i<1000;i++)
  {k=sqrt(i);
   printf("i=%d\t",i);
  for(j=2;j<=k;j++)
    {if(fmod(i,j)!=0) continue; 
     a=j;
     b=i/j;
      if(i==1+a+b)printf("%d its factors are 1,%d,%d\n",i,a,b);break;
      if(i!=1+a+b) l=j+1;
   printf("l=%d\t",l);break; 
   }
    for(;l<=k;l++)
    { if(fmod(i,l)!=0) continue; 
     c=l;
     d=i/l;
   if(i==1+a+b+c+d) printf("%d its factors are 1,%d,%d,%d,%d\n",i,a,b,c,d);break;
   if(i!=1+a+b+c+d) p=l+1;
   printf("p=%d\t",p);break; 
    } 
  for(;p<=k;p++)
   { if(fmod(i,p)!=0) continue; 
     m=p;
     n=i/p; 
   if(i==1+a+b+c+d+m+n) printf("%d its factors are 1,%d,%d,%d,%d,%d,%d\n",i,a,b,c,d,m,n);break;
   if(i!=1+a+b+c+d+m+n)  break;
    }
    
  }
 return 0;   
}

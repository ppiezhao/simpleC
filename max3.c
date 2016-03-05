    #include <stdio.h>
     int main()
   {
     int max(int x,int y);
     int min(int m,int n);
    int a,b,c,e,f,g,h,i;
    scanf("%d,%d,%d",&a,&b,&c);
   e=max(a,b);
    g=min(a,b);
   f=max(e,c);
   h=min(e,c);
  i=min(g,h); 
    printf("按从小到大排序为%d,%d,%d\n",i,h,f);
    return 0;
  }
 int max(int x,int y)
 {  int z;
  if(x>y)z=x;
 else z=y;
 return (z);
}
int min(int m,int n)
{ int t;
 if(m>n)t=n;
else t=m;
 return (t);
} 

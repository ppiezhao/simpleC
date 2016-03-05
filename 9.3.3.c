#include<stdio.h>
#include<string.h>
struct Person
  { char name[20];
    int count;
  }leader[3]={"Zhang",0,"Li",0,"Sun",0};
int main()
{  int i,j;
   char leader_name[20];
  printf("enter 10  numbers:\n");
   for(i=0;i<10;i++)
   { scanf("%s\n",leader_name);
    for(j=0;j<3;j++)
     if(strcmp(leader_name,leader[j].name)==0)  leader[j].count++;
     }
   printf("\nresult:\n");
    for(j=0;j<3;j++)
     printf("%5s:%d\n",leader[j].name,leader[j].count);
    return 0;
}

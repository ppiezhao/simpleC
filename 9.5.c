/*通过指向结构体变量的指针变量输出结构体变量中成员的信息*/
#include<stdio.h>
#include<string.h>
int main()
{struct Student 
  {long num;
   char name[20];
   char sex;
   float score;
  };
  struct Student ste_1;
  struct Student *p;
  p=&ste_1;
  ste_1.num=10101;
  strcpy(ste_1.name,"li lin");
  ste_1.sex='M';
  ste_1.score=89.5;
  printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
         ste_1.num,ste_1.name,ste_1.sex,ste_1.score);
  printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
          (*p).num,(*p).name,(*p).sex,(*p).score);
  return 0;
} 
 



#include<stdio.h>
struct Student
 {int num;
  char name[20];
  float score;
 };
int main()
{
  int i,j,k;
  struct Student stu[5];
  for(i=0;i<5;i++)
   scanf("%d%s%f",&(stu[i].num),stu[i].name,&(stu[i].score));
  struct Student temp;
  for(i=0;i<5;i++)
   {for(j=i+1;j<5;j++)
     if(stu[i].score<stu[j].score)
      {k=i;
       temp=stu[j];
       stu[j]=stu[k];
       stu[k]=temp;
       k++;
      }
   }
  printf("The sort is:\n");
  for(i=0;i<5;i++)
   printf("%5d%5s%6.2f\n",stu[i].num,stu[i].name,stu[i].score);
  return 0;
}
 


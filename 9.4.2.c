#include<stdio.h>
  struct Student
   { int num;
     char name[20];
     float score;
  };
int main()
{   struct Student stu[5]={{10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",86},{10108,"Ling",73.5},{10110,"Sun",100}};
 struct Student temp;
 const int n=5;
 int i,j,k;
 printf("The order is:\n");
   for(i=0;i<n-1;i++)
   {for(j=i+1;j<n;j++)
     if(stu[i].score<stu[j].score)
      {k=i;
       temp=stu[j];
       stu[j]=stu[k];
       stu[k]=temp;
       k++;
      }
   }
      for(i=0;i<n;i++)
      printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
    return 0;
}
 

#include<stdio.h>
int main()
{
 char c;
 int i,word=0,num=0;
  char string[81];
  gets(string);
 for(i=0;(c=string[i])!='\0';i++)
  if (c==' ') word=0;
  else if(word==0)
  {word=1;
   num++;}
  printf("The are %d words in the line. \n",num);
  return 0;
}

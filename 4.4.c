#include <stdio.h>
int main()
 {
   char c;
  scanf("%c",&c);
  c=(c>='A'&&c<='Z')?(c+32):c;
  printf("%c\n",c);
  return 0;
} 

#include<stdio.h>
int main()
{
  int num;
  while(scanf("%d",&num)!=EOF)
  {
      if(num==42)break;
      printf("%d\n",num);
    }
  return 0;
}

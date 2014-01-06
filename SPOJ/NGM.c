#include<stdio.h>

int main (void) {
  int n;
  scanf("%d",&n);
  if (n%10==0) printf ("2\n");
  else printf("1\n%d",n%10);
  return 0;
}


#include<stdio.h>

int main (void) {
  long long int n;
  scanf("%lld",&n);
  if ((n&(n-1))==0)printf("TAK\n");
  else printf("NIE\n");
  return 0;
}

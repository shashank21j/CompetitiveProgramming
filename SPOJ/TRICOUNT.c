#include<stdio.h>
int main() {
  int t,i;
  scanf("%d",&t);
  long long int n;
  for (i=0;i<t;i++) {
    scanf("%lld",&n);
    n=(n*(n+2)*((2*n)+1))/8;
    printf("%lld\n",n);
  }
  return 0;
}


#include<stdio.h>
int main () {
  long long int i,n;
  long long int a=192;
  long long int d=250;
  scanf("%lld",&n);
  long long int m;
  for (i=0;i<n;i++) {
    scanf("%lld",&m);
    printf("%lld\n",a+((m-1)*d));
  }
  return 0;
}


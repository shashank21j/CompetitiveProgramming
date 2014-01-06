#include<stdio.h>
int main () {
  long long int n,i,m,j;
  scanf("%lld",&n);
  for (i=0;i<n;i++) {
    long long int sum=0;
    long long int t;
    scanf("%lld",&m);
    for (j=0;j<m;j++) {
      scanf("%lld",&t);
      sum+=t%m;
    }
    if (sum%m==0) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}



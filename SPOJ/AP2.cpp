#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  scanf("%d",&N);
  for (int j=0;j<N;j++) {
    long long int x,y,z;
    long long int a,n,d;
    scanf("%lld %lld %lld",&x,&y,&z);
    n= 2*z/(x+y);
    d=(y-x)/(n-5);
    a=x-2*d;
    printf("%lld\n",n);
    for (int i=0;i<n;i++) {
      printf("%lld",a);
      a+=d;
      i==n-1?printf("\n"):printf(" ");
    }
  }
  return 0;
}


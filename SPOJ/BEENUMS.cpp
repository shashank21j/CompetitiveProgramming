#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  do {
    scanf("%lld",&n);
    if (n==-1) break;
    long double t=sqrt(1+4*(n-1)/3);
    if (t-(long long int)t==0 && (long long int)t%2==1) printf("Y\n");
    else printf("N\n");
  }while(1);
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  int i;
  int u,v;

  scanf("%d %d",&n,&m);
  if (m!=n-1) {
    printf("NO\n");
    return 0;
  }
  int check[10001]={0};
  for (int i=0;i<m;i++) {
    scanf("%d %d",&u,&v);
    if(check[u]&&check[v]) {
      printf("NO\n");
      return 0;
    }
    else {
      check[u]=1;
      check[v]=1;
    }
  }
  printf("YES\n");
  return 0;
}


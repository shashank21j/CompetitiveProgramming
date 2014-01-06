#include <bits/stdc++.h>
using namespace std;

int main()
{
 stack<int> S;
 int T;
 scanf("%d",&T);
 int comm;
 int x;
 while(T--) {
  scanf("%d",&comm);
  switch(comm){
    case 1:
      if (S.empty()) printf("1\n");
      else printf("0\n");
      break;
    case 2:
      scanf("%d",&x);
      S.push(x);
      break;
    case 3:
      printf("%d\n",S.top());
      break;
    case 4:
      S.pop();
      break;
  }
 }
 return 0;
}


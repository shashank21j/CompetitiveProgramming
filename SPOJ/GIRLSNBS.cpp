#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  while(a!=-1 || b!=-1) {
    if (a>b) std::swap(a,b);
    if (a==0) {
      printf("%d\n",b);
    }
    else if (a==1) {
      printf("%d\n",(b+(b%2))/2);
    }
    else if (b%(a+1)==0) {
      a++;
      printf("%d\n",b/(a));
    }
    else printf("%d\n",b/(a+1)+1);
    scanf("%d %d",&a,&b);
  }
  return 0;
}


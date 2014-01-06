#include <bits/stdc++.h>
using namespace std;

int main()
{
  set <int> a;
  set <int> b;
  int n;
  scanf ("%d",&n);
  int p;
  for (int i=0;i<n;i++) { 
    scanf("%d",&p);
    a.insert(p);
    int n1;
    scanf("%d",&n1);
    for (int j=0;j<n1;j++) {
      scanf ("%d",&p);
      b.insert(p);
    }
  }
  set <int> result;
  set_difference(b.begin(), b.end(), a.begin(), a.end(),inserter(result, result.end()));
  cout<<result.size()<<endl;
  return 0;
}


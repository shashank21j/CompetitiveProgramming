#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  cout<<min(n,min(m,(m+n)/3))<<endl;
  return 0;
}
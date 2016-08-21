#include <bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin>>n;
 int t,res;
 for (int i = 1; i < 55; i++) {
  t = (i*(i+1)*(i+2))/6;
  if (t>n) break;
  res = i;
 }
 cout<<res<<endl;
 return 0;
}

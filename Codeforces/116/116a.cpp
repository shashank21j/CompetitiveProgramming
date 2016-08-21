#include<bits/stdc++.h>

using namespace std;

int main() {
 int n;
 cin>>n;
 int max = 0;
 int so_far = 0;
 for (int i=0;i<n;i++) {
  int a,b;
  cin>>a>>b;
  so_far+=(b-a);
  if (so_far>max) max = so_far;
 }
 cout<<max<<endl;
 return 0;
}

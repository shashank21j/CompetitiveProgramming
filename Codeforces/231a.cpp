#include<bits/stdc++.h>

using namespace std;

int main() {
 int n;
 cin>>n;
 int temp;
 int count = 0;
 for (int i=0;i<n;i++) {
  int cnt = 0;
  for (int j = 0; j<3 ; j++) {
   cin>>temp;
   if (temp ==1) cnt++;
  }
  if (cnt>1) count++;
 }
 cout<<count<<endl;
 return 0;
}

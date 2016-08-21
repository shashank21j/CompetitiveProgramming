#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
 int n,k;
 cin >>n>>k;
 vector <int> A(n);
 for (int i=0;i<n; i++) {
  cin >> A[i];
 }
 sort(A.begin(),A.end());
 int cnt = 0;
 for ( int i = 0 ; i<n; i++) {
  if (A[i] >= A[n-k] && A[i]>0) cnt++;
 }
 cout<<cnt<<endl;
}

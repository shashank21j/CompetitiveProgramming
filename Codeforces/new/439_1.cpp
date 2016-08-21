#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,d;
  cin>>n>>d;
  int arr[n];

  for (int i=0;i<n;i++ ) {
    cin>>arr[i];
  }
  int sum = 0;
  for (int i=0;i<n;i++) {
    sum+=arr[i];
  }
  int time = sum + (n-1)*10;
  if (time > d) cout<<"-1";
  else cout<< (d - sum)/5;

  return 0;
}


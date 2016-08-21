#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,x;
  cin>>n>>x;
  vector <long long int> C(n);
  for (int i=0;i<n;i++) {
    cin>>C[i];
  }
  sort (C.begin(), C.end());
  long long int sum = 0;
  for (int i=0;i<n;i++) { 
    sum += C[i]*x;
    if (x>1) {
      x--;
    }
  }
  cout<<sum;

  return 0;
}


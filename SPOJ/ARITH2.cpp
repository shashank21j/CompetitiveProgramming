#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin>>N;
  for (int i=0;i<N;i++) {
    long long int n,n1;
    char op;
    cin>>n>>op;
    while (op != '=') {
      cin>>n1;
      if (op=='+') n+=n1;
      else if (op =='*') n*=n1;
      else if (op =='-') n-=n1;
      else if (op =='/') n/=n1;
      cin>>op;
    }
    cout<<n<< "\n";
  }
  return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main() {
 long long int m,n;
 cin>>m>>n;
 if (m%2 == 0 || n%2 ==0) cout<<(m*n)/2;
 else if (m%2==1) cout<<(((m-1)*n)/2) + (n/2);
 else if (n%2 == 1) cout<<(((n-1)*m)/2)  + (m/2);
 cout<<endl;
 return 0;
}

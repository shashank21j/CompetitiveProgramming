#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,p;
  cin>>n>>k>>p;
  vector <int> arr(n);
  vector <int> odd;
  vector <int> even;
  for (int i=0;i<n;i++) {
    cin>>arr[i];
    if (arr[i]%2==0) {
      even.push_back(arr[i]);
    }
    else odd.push_back(arr[i]);
  }
  if (k-p > (int)odd.size() ) {
    cout<<"NO";
    return 0;
  }
  int ox =  (int)odd.size() - (k-p);
  if (ox%2!=0) {
    cout<<"NO";
    return 0;
  }
  int ex = p- (int)even.size();
  if (ex>ox/2) {
    cout<<"NO";
    return 0;
  }

  cout<<"YES"<<"\n";
  
  for (int i=0;i<min(p,(int)even.size());i++) {
    cout<<"1 "<<even[i]<<"\n";
  }
  
  int counter=0;
  while (ex>0) {
    cout<<"2 "<<odd[counter]<<" "<<odd[counter+1]<<"\n";
    counter+=2;
    ex-=1;
  }
  for (;counter < k-p-1;counter++) {
    cout<<"1 "<<odd[counter]<<"\n";
  }
  int remaining = 0;
  if ( (int)even.size()-p > 0 ) remaining +=(int)even.size()-p;
  if ((int)odd.size()>counter) remaining +=(int)odd.size()-counter;
  cout<<remaining<<" ";
  for (int i=p;i<(int)even.size();i++ ) cout<<even[i]<<" ";
  for (int i=counter;i<(int)odd.size() ; i++) cout<<odd[i]<<" ";
  cout<<"\n";
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin>>N;
  vector <int> numbers(N);
  vector <int> A;
  vector <int> B;

  for (int i=0;i<N;i++) {
    cin>>numbers[i];
  }
  for (int i = 0 ; i < N ; i++) {
    for (int j = 0 ; j < N ; j++) {
      for (int k = 0 ; k < N ; k++) {
        A.push_back(numbers[i]*numbers[j] + numbers[k]);  
      }
    }
  }
  sort(A.begin(),A.end());
  for (int i = 0 ; i < N ; i++) {
    if (numbers[i]==0) continue;
    for (int j = 0 ; j < N ; j++) {
      for (int k = 0 ; k < N ; k++) {
        B.push_back(numbers[i]*(numbers[j] + numbers[k]));  
      }
    }
  }
  sort(B.begin(),B.end());
  int count = 0;
  int i=0, j=0;
  while(i < A.size() && j < B.size()) {
    if (A[i]<B[j]) i++;
    else if (A[i]>B[j]) j++;
    else {
      int c1=1, c2=1;
      while (A[i+1]==A[i] && i<A.size() ) {i++;c1++;}
      while (B[j+1]==B[j] && j<B.size() ) {j++;c2++;}
      count+=c1*c2 ;
      i++;
      j++;
    }
  }
  cout<<count<<"\n";
  return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main() { 
 int n;
 cin >> n;
 vector <int> A(n);
 int onec = 0;
 int twoc = 0;
 int threec = 0;
 int fourc = 0;
 for (int i=0; i<n; i++) {
  cin>> A[i];
  if (A[i] == 1) onec++;
  else if (A[i] == 2) twoc++;
  else if (A[i] == 3) threec++;
  else if (A[i] == 4) fourc++;
 }
 int res = 0;
 res += fourc;
 if (threec > onec ) {
  res +=threec;
  onec =0;
 }
 else {
  res+= threec;
  onec -=threec;
 }
 res += twoc/2;
 twoc = twoc%2;
 if (twoc ==1 ) { 
  res+=1;
  onec = max(0,onec-2);
 }
 res+= onec/4;
 if (onec%4 >0) res+=1;
 cout<<res;
 return 0;
}

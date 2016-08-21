#include<bits/stdc++.h>

using namespace std;

int main() {
 string s;
 cin>>s;
 int flag1=0,flag2=0;
 if (s[0] < 97) {
  for (int i = 1; i< s.length(); i++) {
   if (s[i] >= 97) {
    cout<<s<<endl;
    flag1 = 1;
    break;
   }
  }
  if (flag1 == 0) {
   for (int i=0;i<s.length();i++) {
    if (s[i]<97) s[i]+=32;
    else s[i]-=32;
   }
   cout<<s<<endl;
  }
 }
 else {
  for (int i=1; i<s.length(); i++ ) {
   if (s[i] >=97) {
    cout<<s<<endl;
    flag2=1;
    break;
   }
  }
  if (flag2 == 0) {
   for (int i=0 ; i<s.length(); i++ ) {
    if (s[i]<97) s[i]+=32;
    else s[i]-=32;
   }
   cout<<s<<endl;
  }
 } 
 return 0;
}

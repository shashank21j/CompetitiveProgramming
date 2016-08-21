#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>>s;
  string s1 = "";
  s1 += s[0];
  for (int i = 1;i<s.length();i++) {
    if (s[i] == s1[s1.length()-1]) continue;
    s1 += s[i];
  }
  int q;
  cin>>q;
  for (int i = 0;i<q;i++) {
    string t;
    cin>>t;
    string t1 = "";
    t1+=t[0];
    for (int j = 1;j<t.length();j++ ) {
      if (t[i] == t1[t1.length()-1]) continue;
      t1 += t[i];  
    }
    int j = 0,k = 0;
    int ind = -1;
    while (j < s1.length() && k<t1.length()) {
      if (s1[j] == t1[k]) {
        if (ind == -1) ind = j;
        j++;
        k++;
      }
      else {
        j++;
      }
    }
    if (k!= t.length()) cout<<"Not Matched"<<endl;
    else {
      cout<<"Matched "<<ind<<" "<<j-1<<endl;
    }
  }
  return 0;
}

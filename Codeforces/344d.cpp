#include <bits/stdc++.h>
using namespace std;
int len;
int main()
{
  stack <char> s1;
  string s;
  cin>>s;
  len=s.length();
  if (s.length()%2==1) {
    cout<<"No\n";
    return 0;
  }
  s1.push(s[0]);
  int flag=0;
  int i=1;
  while(i<s.length()) {
    if(s[i]!=s1.top() ) {
      s1.push(s[i]);
      i++;
      continue;
    }  
    if (s[i]==s1.top()){
      s1.pop();
      i++;
      
    }
    if (s1.empty() && i<len-1) {
      s1.push(s[i]);
      i++;
    }
  }
  
  if (s1.empty()) cout<<"Yes\n";
  else cout<<"No\n";
  return 0;
}


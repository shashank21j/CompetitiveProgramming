#include <bits/stdc++.h>

using namespace std;

int main() {
  string st;
  int flag;
  flag = 0;
  while( getline(cin,st) ) {
    for (int i=0; i< st.length(); i++) {
      if (st[i] == '"' && flag == 0) {
        printf("``");
        flag = 1;
      }
      else if (st[i] == '"' && flag == 1) {
	printf("''");
        flag = 0;
      }    
      else printf("%c",st[i]);
    }
    cout <<"\n";
  }
  return 0;
}

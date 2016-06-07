#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    string s;
    map<char,int> phone;
    for (int i = 2;i<=6;i++) {
        for (int j = 0;j<3;j++) {
            phone[(char)97+(i-2)*3 + j] = j+1;
        }
    }
    for (int i = 112; i< 116;i++) {
        phone[(char)i] = i - 111;
    }
    for (int i = 116; i< 119;i++) {
        phone[(char)i] = i - 115;
    }
    for (int i = 119;i<123;i++) {
        phone[(char)i] = i-118;
    }
    getchar();
    for (int i = 1;i<=n;i++) {
        getline(cin,s);
        int counts = 0;
        for (int i = 0;i<s.length();i++) {
            if (s[i] == ' ') counts++;
            else counts+=phone[s[i]];
        }
        cout<<"Case #"<<i<<": "<<counts<<endl;
    }
    return 0;
}
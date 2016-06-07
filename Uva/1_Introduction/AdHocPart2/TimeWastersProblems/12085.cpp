#include <bits/stdc++.h>
using namespace std;

string str(long long int a) {
    string r = "";
    while (a != 0) {
        r+=a%10 + 48;
        a/=10;
    }
    return r;
}
void print(long long int a,long long int b) {
    string s1,s2;
    s1 = str(a);
    s2 = str(b);
    if (a == b) {
        cout<<"0"<<a<<endl;
        return;
    }
    int i;
    cout<<"0";
    for (i = s1.length()-1;i>= 0;i--) {
        if (s1[i] == s2[i]) cout<<s1[i];
        else {
            break;
        }
    }
    for (int k = i;k>= 0; k--) {
        cout<<s1[k];
    }
    cout<<"-";
    for (int k = i;k>=0;k--) {
        cout<<s2[k];
    }
    cout<<endl;
}

int main () {
    int n;
    int cnt = 1;
    while(1) {
        cin>>n;
        if (n == 0) {
            break;
        }
        cout<<"Case "<<cnt++<<":"<<endl;
        vector <long long int> inp;
        long long int ele;
        for (int i = 0;i<n;i++) {
            cin>>ele;
            inp.push_back(ele);
        }
        int i = 0;
        int j;
        while (i < inp.size()) {
            // cout<<i<<endl;
            for (j = i+1;j<inp.size();j++) {
                if (inp[j] == inp[i] + j-i) {
                    continue;
                }
                else {
                    break;
                }
            }
            print(inp[i], inp[j-1]);
            i = j;
            if (j == n) break;
        }
        cout<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int palindrome(int n) {
    string s = "";
    while (n != 0) {
        s += n%10 + 48;
        n/=10;
    }
    for (int i = 0;i< s.length();i++) {
        if (s[i] != s[s.length() -1 -i]) return false;
    }
    return true;
}

int main () {
    int n;
    cin>>n;
    while (n--) {
        string s;
        cin>>s;
        int num = (s[0]-48)*1000 + (s[1]-48)*100 + (s[3]-48)*10 + (s[4] - 48) + 1;
        if (num % 100 == 60) {
            num += 40;
        }
        if (num/100 == 24) {
            num = 0;
        }
        while (!palindrome(num)) {
            num+=1;
            if (num%100 == 60) {
                num += 40;
            }
            if (num/100 == 24) {
                num = 0;
            }
        }
        if (num < 10) cout<<"00:0"<<num<<endl;
        else if (num < 100) cout<<"00:"<<num<<endl;
        else if (num < 1000) {
            cout<<"0"<<num/100<<":";
            if (num%100 < 10) cout<<"0";
            cout<<num%100<<endl;
        }
        else {
            cout<<num/100<<":";
            if (num%100 <10) cout<<"0";
            cout<<num%100<<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool check(int num, string s) {
    int left = 0;
    int right = 0;
    for (int i = 0;i<s.length()/2;i++) {
        left = left*10 + s[i] - 48;
    }
    for (int i = s.length()/2; i < s.length(); i++) {
        right = right*10 + s[i] - 48;
    }
    if ((left + right)*(left + right) == num) {
        return true;
    }
    else {
        return false;
    }
}
string ms(int num, int d) {
    string s = "";
    for (int i = 0;i<d;i++) {
        s += "0";
    }
    int j = s.length() - 1;
    while (num != 0) {
        s[j--] = num%10 + 48;
        num /= 10;
    }
    return s;
}

int main () {
    map <int, vector <string> > res;
    for (int i = 1;i < 5; i++) {
        for (int j = 0; j< pow(10,i);j++) {
            int sq = j*j;
            string sqs = ms(sq,i*2);
            if (check(sq,sqs)) {
                res[2*i].push_back(sqs);
            }
        }
    }
    int t;
    while(cin>>t) {
        for (auto i:res[t]) {
            cout<<i<<endl;
        }
    }
    return 0;
}

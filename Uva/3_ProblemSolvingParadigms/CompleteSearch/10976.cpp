#include <bits/stdc++.h>
using namespace std;

string str(int n) {
    string res = "";
    while (n != 0) {
        res += n%10 + 48;
        n /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main () {
    int n;
    while (cin>>n) {
        vector <string> res;
        int cnt = 0;
        string s;
        for (int i = n + 1; i <= 2*n;i++) {
            if ((i*n)%(i - n) == 0) {
                cnt++;
                s = "1/" + str(n) + " = 1/" + str((i*n)/(i - n)) + " + 1/" + str(i);
                res.push_back(s);
            }
        }
        cout<<cnt<<endl;
        for (auto i:res) {
            cout<<i<<endl;
        }
    }
    return 0;
}

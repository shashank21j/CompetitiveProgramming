#include <bits/stdc++.h>
using namespace std;

int main () {
    string a,b;
    while (cin>>a>>b) {
        cout<<a<<endl;
        cout<<b<<endl;
        int c = 0;
        stack <int> pushpa;
        vector <int> res;
        for (int i = 0;i<a.length();i++) {
            pushpa.push(a[i]);
            res.push_back(1);

            while(!pushpa.empty() && pushpa.top() == b[c]) {
                res.push_back(0);
                pushpa.pop();
                c++;
            }
        }
        for (auto i:res) {
            if (i == 0) cout<<"o ";
            else {
                cout<<"i ";
            }
        }
        cout<<endl;
    }
    return 0;
}
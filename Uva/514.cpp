#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    while (n!= 0) {
        int a;
        cin>>a;
        while (a != 0) {
            vector <int> train;
            for (int i = 0;i<n;i++) {
                train.push_back(a);
                cin>>a;
            }
            int c = 0;
            stack <int> pushpa;
            for (int i = 1;i<=n;i++) {
                pushpa.push(i);
                while(!pushpa.empty() && pushpa.top() == train[c]) {
                    pushpa.pop();
                    c++;
                }
            }

            if (pushpa.empty()) cout<<"Yes"<<endl;
            else {
                cout<<"No"<<endl;
            }
            train.clear();
        }
        cin>>n;
        cout<<endl;
    }
    return 0;
}
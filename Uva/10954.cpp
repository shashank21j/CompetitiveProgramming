#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int ele;
    while(n!=0) {
        priority_queue<int> seq;
        for (int i = 0;i<n;i++) {
            cin>>ele;
            seq.push(-1*ele);
        }
        int cost = 0;
        while (seq.size()!=1) {
            int t1 = -1*seq.top();seq.pop();
            int t2 = -1*seq.top();seq.pop();
            cost += t1+t2;
            seq.push(-1*(t1+t2));
        }
        cout<<cost<<endl;
        cin>>n;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,s,q;
        cin>>n>>s>>q;
        int ele;
        vector <queue <int> > station(n);
        for (int i = 0;i<n;i++) {
            int n1;
            cin>>n1;
            for (int j = 0;j<n1;j++) {
                cin>>ele;
                station[i].push(ele);
            }
        }
        bool flag = true;

        int i = 0;
        int cost = -2;
        stack <int> st;
        while (flag) {
            bool flag2 = true;
            for (int j = 0;j<n;j++) {
                if (!station[j].empty()) {
                    flag2 = false;
                }
            }
            if (flag2 == true && st.empty()) break;
            cost += 2;
            if (i == n) i = 0;

            while(!st.empty() ) {
                ele = st.top();
                if (ele != i+1 ) {
                    if (station[i].size() < q) {
                        station[i].push(ele);
                        cost +=1;
                        st.pop();
                    }
                    else {
                        break;
                    }
                }
                else {
                    cost += 1;
                    st.pop();
                }
            }
            while(st.size() < s && station[i].size() > 0) {
                ele = station[i].front();
                st.push(ele);
                cost+=1;
                station[i].pop();
            }
            i += 1;
        }
        cout<<cost<<endl;
    }
    return 0;
}
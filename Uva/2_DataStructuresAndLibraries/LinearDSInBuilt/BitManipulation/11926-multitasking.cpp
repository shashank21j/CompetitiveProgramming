#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    while (n + m != 0) {
        vector <int> busy(1000009,0);
        int a,b,c;
        bool flag = true;
        for (int i1 = 0;i1<n;i1++) {
            cin>>a>>b;
            if (flag == false) {
                continue;
            }
            for (int i = a;i< b;i++) {
                if (busy[i] != 0) flag = false;
                else busy[i] = 1;
            }
        }
        for (int i1 = 0;i1<m;i1++) {
            cin>>a>>b>>c;
            if (flag == false) {
                continue;
            }
            int delta1 = a;
            int delta2 = b;
            for (int i = 0; ;i++) {
                delta1 = a + i*c;
                delta2 = delta1 + b - a;
                if (delta1 > 1000000) break;
                delta2 = min(delta2,1000001);
                for (int j = delta1;j < delta2;j++) {
                    if (busy[j] != 0) flag = false;
                    else busy[j] = 1;
                }
            }
        }
        if (flag == true) {
            cout<<"NO CONFLICT"<<endl;
        }
        else {
            cout<<"CONFLICT"<<endl;
        }
        cin>>n>>m;
        busy.clear();
    }
    return 0;
}

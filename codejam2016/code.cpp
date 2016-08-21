#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    int n;
    int cnter = 0;
    while(t--) {
        cnter++;
        cin>>n;
        bool flag = true;
        set<int> temp;
        int cnt = 1;
        int n1 = n;
        while (flag) {
            int k = n;
            while (k!=0) {
                temp.insert(k%10);
                k/=10;
            }
            if (temp.size() == 10) {
                cout<<"Case #"<<cnter<<": "<<n<<endl;
                flag = false;
                break;
            }
            n+=n1;
            cnt++;
            if (cnt >= 100) break;
        }
        if (flag) cout<<"Case #"<<cnter<<": INSOMNIA"<<endl;
    }
    return 0;
}

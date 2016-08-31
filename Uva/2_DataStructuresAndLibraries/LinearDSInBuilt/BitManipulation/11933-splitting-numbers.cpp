#include <bits/stdc++.h>
using namespace std;

int main () {
    long long int n;
    cin>>n;
    while (n != 0) {
        vector <int> a1;
        vector <int> a2;
        int ii = 0;

        for (long long int i = 0;(1LL<<i )<= n;i++) {
            if ((n&(1LL<<i)) == (1LL<<i)) {
                if (ii == 0) {
                    a1.push_back(i);
                }
                else {
                    a2.push_back(i);
                }
                ii ^= 1;
            }
        }
        long long int res1 = 0;
        long long int res2 = 0;
        for (int i = 0; i < a1.size();i++) {
            res1 += (1<<a1[i]);
        }
        for (int i = 0; i < a2.size();i++) {
            res2 += (1<<a2[i]);
        }
        cout<<res1<<" "<<res2<<endl;
        cin>>n;
    }
    return 0;
}

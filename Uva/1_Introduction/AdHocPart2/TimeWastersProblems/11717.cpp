#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin>>t;
    int n, i, k;
    int val;
    int active_till;
    int active_from;
    int inactive;
    int ignored;
    int idx = 0;
    while (t--) {
        cin >> n >> i >> k;
        active_from = 0;
        active_till = active_from + i;
        inactive = 0;
        ignored = 0;
        while (n--) {
            cin>>val;
            if (val < active_till && val >= active_from) {
                active_till = val + i;
            }
            else if (val >= active_till) {
                active_from = val + k;
                active_till = active_from + i;
                inactive += 1;
            }
            else if (val < active_from) {
                ignored += 1;
            }
        }
        cout<<"Case "<<++idx<<": "<<inactive<<" "<<ignored<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    int n;
    int ele;
    cin >> t;
    int idx = 0;
    while (t--) {
        set <int> frst;
        set <int> scond;
        set <int> thrd;

        set <int> i_frst;
        set <int> i_scond;
        set <int> i_thrd;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ele;
            frst.insert(ele);
        }
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ele;
            scond.insert(ele);
        }
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ele;
            thrd.insert(ele);
        }
        for (auto i:frst) {
            if (scond.find(i) == scond.end() && thrd.find(i) == thrd.end()) {
                i_frst.insert(i);
            }
        }
        for (auto i:scond) {
            if (frst.find(i) == frst.end() && thrd.find(i) == thrd.end()) {
                i_scond.insert(i);
            }
        }
        for (auto i:thrd) {
            if (frst.find(i) == frst.end() && scond.find(i) == scond.end()) {
                i_thrd.insert(i);
            }
        }
        int maxi = - 1;
        maxi = max(maxi, (int)i_frst.size());
        maxi = max(maxi, (int)i_scond.size());
        maxi = max(maxi, (int)i_thrd.size());

        cout<<"Case #"<<++idx<<":"<<endl;
        if ((int)i_frst.size() == maxi) {
            cout << 1 << " " << (int)i_frst.size();
            for (auto i: i_frst) {
                cout << " " << i;
            }
            cout << endl;
        }
        if ((int)i_scond.size() == maxi) {
            cout << 2 << " " << (int)i_scond.size();
            for (auto i: i_scond) {
                cout << " " << i;
            }
            cout << endl;
        }
        if ((int)i_thrd.size() == maxi) {
            cout << 3 << " " << (int)i_thrd.size();
            for (auto i: i_thrd) {
                cout << " " << i;
            }
            cout << endl;
        }
    }
    return 0;
}

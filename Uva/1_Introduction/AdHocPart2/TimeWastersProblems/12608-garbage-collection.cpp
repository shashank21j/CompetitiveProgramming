#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int w, n;
    while (t--) {
        cin >> w>> n;
        int x, ww;
        int total_dist = 0;
        int truck_weight = 0;
        int idx=0;
        for (int i = 0;i <n;i++) {
            cin >> x >> ww;
            assert (ww <= w);
            if (truck_weight + ww < w) {
                truck_weight += ww;
            }
            else if (truck_weight + ww == w) {
                truck_weight = 0;
                if (i < n-1) total_dist += x*2;
            }
            else {
                total_dist += x*2;
                truck_weight = ww;
                if (ww == w && i < n-1) {
                    truck_weight = 0;
                    total_dist += x*2;
                }
            }
        }
        cout<<total_dist + x*2<<endl;
    }
    return 0;
}

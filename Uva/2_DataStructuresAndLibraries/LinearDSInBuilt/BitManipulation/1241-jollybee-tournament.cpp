#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n, m;
    cin >> t;
    int ele;
    while(t--) {
        cin >> n >> m;
        vector <int> arr(pow(2, n), 0);
        for (int i = 0; i < m; i++) {
            cin >> ele;
            arr[ele - 1] = 1;
        }
        int result_res = 0;
        for (int i = 0; i < n; i++) {
            vector <int> res;
            for (int j = 0; j < arr.size(); j += 2) {
                result_res += arr[j] ^ arr[j+1];
                res.push_back(arr[j] & arr[j+1]);
            }
            arr.clear();
            arr = res;
        }
        cout << result_res << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int idx = 0;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        vector <int> arr(n);
        for (int i = 0;i < n; i++) {
            cin>> arr[i];
        }
        int sum1 = accumulate(arr.begin(), arr.end(), 0);
        int each = sum1 / n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += max(0, arr[i] - each);
        }
        cout<<"Set #"<<++idx<<endl;
        cout<<"The minimum number of moves is "<<cnt<<"."<<endl;
        cout<<endl;
    }
    return 0;
}

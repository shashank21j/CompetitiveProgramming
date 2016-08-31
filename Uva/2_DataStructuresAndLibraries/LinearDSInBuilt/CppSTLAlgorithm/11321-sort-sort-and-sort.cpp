#include <bits/stdc++.h>
using namespace std;
bool comp(pair <long long int, long long int> a, pair <long long int, long long int> b) {
    if (a.first < b.first) {
        return true;
    } else if (a.first == b.first) {
        if (abs(a.second) % 2 == 1 && b.second % 2 == 0) {
            return true;
        } else if (abs(a.second) % 2 == 1 && abs(b.second) % 2 == 1 && a.second > b.second) {
            return true;
        } else if (a.second % 2 == 0 && b.second % 2 == 0 && a.second < b.second) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
int main() {
    long long int N, M;
    while(cin >> N >> M) {
        cout << N << " " << M << endl;
        if (N + M == 0) {
            break;
        }
        vector <pair<long long int, long long int> > arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
            arr[i].first = arr[i].second % M;
        }
        sort(arr.begin(), arr.end(), comp);
        for (auto i:arr) {
            cout << i.second << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    map<vector<int>, string> dates;
    string name;
    while (t--) {
        cin >> name;
        vector <int> temp(3);
        for (int i = 2; i >= 0; i--) {
            cin >> temp[i];
        }
        dates[temp] = name;
    }
    cout << dates.rbegin()->second << endl;
    cout << dates.begin()->second << endl;
    return 0;
}

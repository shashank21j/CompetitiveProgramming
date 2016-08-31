#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        vector <pair<string, string> > cards(n);
        for(int i = 0; i < n; i++) {
            cin >> cards[i].first >> cards[i].second;
        }
        vector <string> result(n, "");
        int pos = 0;
        for (int i = 0; i < n;i++)  {
            int steps = (int)cards[i].second.length();
            while(steps != 1 || result[pos] != "") {
                if (result[pos] == "") {
                    steps -= 1;
                }
                pos += 1;
                pos %= n;
            }
            result[pos] = cards[i].first;
            pos += 1;
            pos %= n;
        }
        for (int i = 0; i< n; i++) {
            cout<<result[i];
            if (i < n-1) {
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}

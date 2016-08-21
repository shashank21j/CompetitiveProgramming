#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    vector <int> month_to_i {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector <string> weekday {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday"};
    for (int i = 1;i <= 12;i++) {
        month_to_i[i] = month_to_i[i] + month_to_i[i-1];
    }
    while (t--) {
        int m, d;
        cin >> m >> d;
        int days = (month_to_i[m-1] + d - 1)%7;
        cout << weekday[days] << endl;
    }
    return 0;
}

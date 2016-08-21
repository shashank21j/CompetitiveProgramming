#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int idx = 0;
    while(n--) {
        double temp;
        double sum = 0.0;
        double fraction;
        int sum_int;
        for (int i = 0; i<12;i++) {
            cin >> temp;
            sum += temp;
        }
        sum /= 12;
        sum_int = (int)sum;
        fraction = sum - sum_int;
        cout<<++idx<< " $";
        vector <int> vals;
        while(sum_int != 0) {
            vals.push_back(sum_int%1000);
            sum_int /= 1000;
        }
        if (vals.size() == 1) {
            cout<<fixed<<setprecision(2)<<sum<<endl;
            continue;
        }
        reverse(vals.begin(), vals.end());
        cout<<vals[0];
        for (int i = 1;i < vals.size()-1;i++) {
            cout<<",";
            if (vals[i] < 100) cout<<"0";
            if (vals[i] < 10) cout<<"0";
            cout<<vals[i];
        }
        cout << ",";
        if (vals.back() < 100) cout << "0";
        if (vals.back() < 10) cout << "0";
        cout<<fixed<<setprecision(2)<<vals.back() + fraction<<endl;
    }
    return 0;
}

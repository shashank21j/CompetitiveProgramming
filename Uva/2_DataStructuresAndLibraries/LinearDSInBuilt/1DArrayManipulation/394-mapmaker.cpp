#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    map <string, vector <int>> arr;
    map <string, vector <pair <int, int > > > bounds;
    string name;
    int base;
    int sz;
    int dim;
    for (int i = 0;i < n;i++) {
        cin >> name;
        cin >> base >> sz >> dim;
        arr[name].push_back(base);
        arr[name].push_back(sz);
        arr[name].push_back(dim);
        int u, l;
        for (int j = 0; j < dim; j++) {
            cin >> u >> l;
            bounds[name].push_back(make_pair(u, l));
        }
    }
    vector <int> dims;
    int ele;
    for (int i = 0; i < r; i++) {
        dims.clear();
        cin >> name;
        sz = arr[name][2];
        for (int j = 0; j < sz; j++) {
            cin >> ele;
            dims.push_back(ele);
        }
        vector <int> c_arr(sz+1, 0);
        c_arr[sz] = arr[name][1];
        for (int j = sz-1; j > 0; j--) {
            c_arr[j] = c_arr[j+1]*(bounds[name][j].second - bounds[name][j].first + 1);
        }
        int diff = 0;
        for (int j = 1; j <= sz; j++) {
            diff += c_arr[j] * bounds[name][j-1].first;
        }
        c_arr[0] = arr[name][0] - diff;
        int sum = c_arr[0];
        for (int j = 1; j <= sz; j++) {
            sum += c_arr[j] * dims[j-1];
        }
        cout<<name<<"[";
        for (int j = 0; j < sz; j++) {
            cout<<dims[j];
            if (j < sz - 1) {
                cout << ", ";
            }
        }
        cout<<"] = "<<sum<<endl;
    }
    return 0;
}

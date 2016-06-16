#include <bits/stdc++.h>

using namespace std;

int green(vector <int> &arr, int bin) {
    return arr[3*bin + 0] + arr[3*bin + 2];
}

int brown(vector <int> &arr, int bin) {
    return arr[3*bin + 1] + arr[3*bin + 2];
}
int clear(vector <int> &arr, int bin) {
    return arr[3*bin + 0] + arr[3*bin + 1];
}
int main () {
    vector <int> arr(9);
    while (cin>>arr[0]) {
        for (int i = 1;i<9;i++) {
            cin>>arr[i];
        }
        int mini = INT_MAX;
        string out;
        int t;
        t = brown(arr,0) + clear(arr,1) + green(arr,2);
        if (t < mini) {
            mini = t;
            out = "BCG";
        }
        t = brown(arr,0) + green(arr,1) + clear(arr,2);
        if (t < mini) {
            mini = t;
            out = "BGC";
        }
        t = clear(arr,0) + brown(arr,1) + green(arr,2);
        if (t < mini) {
            mini = t;
            out = "CBG";
        }
        t = clear(arr,0) + green(arr,1) + brown(arr,2);
        if (t < mini) {
            mini = t;
            out = "CGB";
        }
        t = green(arr,0) + brown(arr,1) + clear(arr,2);
        if (t < mini) {
            mini = t;
            out = "GBC";
        }
        t = green(arr,0) + clear(arr,1) + brown(arr,2);
        if (t < mini) {
            mini = t;
            out = "GCB";
        }
        cout<<out<<" "<<mini<<endl;
    }
    return 0;
}

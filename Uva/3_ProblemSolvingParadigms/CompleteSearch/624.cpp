#include <bits/stdc++.h>

using namespace std;

int mini = INT_MAX;
vector <int> res1;
void fun(int init, vector <int> &arr, vector <int> &res, int N) {
    for (int i = init; i<arr.size();i++) {
        if (arr[i] <= N) {
            res.push_back(arr[i]);
            fun(i+1,arr,res,N-arr[i]);
        }
    }
    if (N < mini) {
        mini = N;
        res1.clear();
        for (auto i:res) {
            res1.push_back(i);
        }
    }
    res.pop_back();
}
int main () {
    int N;
    while (cin>>N) {
        mini = INT_MAX;
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i = 0;i<n;i++) {
            cin>>arr[i];
        }
        vector <int> res;
        fun(0,arr,res,N);
        for (auto i:res1) cout<<i<<" ";
        cout<<"sum:"<<accumulate(res1.begin(), res1.end(),0)<<endl;
    }
    return 0;
}

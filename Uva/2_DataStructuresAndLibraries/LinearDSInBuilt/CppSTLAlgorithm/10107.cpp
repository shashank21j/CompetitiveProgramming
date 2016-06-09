#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    multiset <long long int> arr1;
    multiset <long long int> arr2;
    vector <long long int> inp;
    while (cin>>n) {
        inp.push_back(n);
    }
    if (inp.size() >= 1) {
        cout<<inp[0]<<endl;
    }
    if (inp.size() >= 2) {
        cout<<(inp[0] + inp[1])/2<<endl;
    }
    if (inp.size() >= 3) {
        long long int a = inp[0];
        long long int b = inp[1];
        if (a > b) swap(a,b);
        arr1.insert(a);
        arr2.insert(b);
        int cnt = 2;
        for (int i = 2;i<inp.size();i++) {
            long long int val = inp[i];
            if (val <= *arr2.begin()) {
                arr1.insert(val);
            }
            else if (val > *arr1.rbegin()) {
                arr2.insert(val);
            }
            if (arr1.size() > arr2.size()) {
                arr2.insert(*arr1.rbegin());
                arr1.erase(*arr1.rbegin());
            }
            if (arr2.size() > arr1.size()+1) {
                arr1.insert(*arr2.begin());
                arr2.erase(*arr2.begin());
            }
            cnt += 1;
            if (cnt %2 == 0) {
                cout<<(*arr1.rbegin() + *arr2.begin())/2<<endl;
            }
            else {
                cout<<*arr2.begin()<<endl;
            }
        }
    }
    return 0;
}
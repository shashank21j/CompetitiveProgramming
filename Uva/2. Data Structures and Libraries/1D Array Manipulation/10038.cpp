#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    while(cin>>n) {
        vector <int> arr(n);
        vector <int> check(n,0);
        for (int i = 0;i<n;i++) {
            cin>>arr[i];
        }
        bool flag= true;
        for (int i = 1;i<n;i++) {
            int val = abs(arr[i] - arr[i-1]);
            if ( val > n-1) {
                flag = false;
                break;
            }
            check[val] = 1;
        }
        for (int i = 1;i<n;i++) {
            if (check[i] != 1) {
                flag = false;
                break;
            }
        }
        if (flag) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;

    }
    return 0;
}
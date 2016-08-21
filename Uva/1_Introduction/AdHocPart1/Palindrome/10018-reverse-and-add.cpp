#include <bits/stdc++.h>
using namespace std;

long long int rev(long long int n) {
    long long int res = 0LL;
    while(n!=0LL) {
        res = res*10LL + n%10LL;
        n/=10LL;
    }
    return res;
}
bool palin(long long int n) {
    vector <int> temp;
    while(n != 0) {
        temp.push_back(n%10LL);
        n/=10LL;
    }
    for (int i = 0;i<temp.size();i++) {
        if (temp[i] != temp[temp.size()-1-i]) {
            return false;
        }
    }
    return true;
}
int main () {
    int t;
    cin>>t;
    while(t--) {
        long long int n;
        cin>>n;
        int cnt = 0;

        do {
            n = n + rev(n);
            cnt++;
            if (cnt> 1000) {
                break;
            }
        }
        while (!palin(n));
        cout<<cnt<<" "<<n<<endl;
    }
    return 0;
}
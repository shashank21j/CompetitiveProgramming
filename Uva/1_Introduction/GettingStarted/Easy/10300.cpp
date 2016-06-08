#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int sum = 0;
        for (int i = 0;i<n;i++) {
            int a,b,c;
            cin>>a>>b>>c;
            sum += a*c;
        }
        cout<<sum<<endl;
    }
    return 0;
}

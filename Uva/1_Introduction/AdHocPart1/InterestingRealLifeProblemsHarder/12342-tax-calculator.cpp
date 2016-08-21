#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int idx = 0;
    while (t--) {
        cout<<"Case "<<++idx<<": ";
        long long int tax = 0LL;
        int n;
        cin >> n;
        // cout<<n<<endl;
        if (n <= 180000) {
            cout<<0<<endl;
            continue;
        }
        // first slab
        n = n - min(n, 180000);
        // second slab
        tax += (long long int)min(n, 300000) * 10;
        n -= min(n, 300000);
        // third slab
        tax += (long long int)min(n, 400000)  * 15;
        n -= min(n, 400000);
        // fourth slab
        tax += (long long int)min(n, 300000) * 20;
        n -= min(n, 300000);
        // fifth slab
        tax += (long long int)(n) * 25;
        tax = tax/100 + (int)(tax%100 != 0);
        cout << max(tax, 2000LL)<<endl;
    }
    return 0;
}

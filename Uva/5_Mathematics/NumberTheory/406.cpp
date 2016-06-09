#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,c;
    vector <int > primes(1007,0);
    for (int i = 2; i < 1005;i++) {
        if (primes[i] == 1) continue;
        for (int j = i*2; j < 1005;j += i) {
            primes[j] = 1;
        }
    }

    while(scanf("%d %d",&n,&c)!= EOF) {
        vector <int> output;
        for (int i = 1; i <= n; i++) {
            if (primes[i] == 0) {
                output.push_back(i);
            }
        }
        int pivot = output.size()/2;
        int a = max(pivot - c + (int)output.size()%2,0);
        int b = min(pivot + c,(int)output.size());
        cout<<n<<" "<<c<<": ";
        for (int i = a;i<b;i++) {
            cout<<output[i];
            if (i < b-1) cout<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}
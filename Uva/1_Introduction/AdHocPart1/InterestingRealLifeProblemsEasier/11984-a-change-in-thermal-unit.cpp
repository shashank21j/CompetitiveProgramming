#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    int idx = 0;
    double c, n;
    while(t--) {
        cout<<"Case "<<++idx<<": ";
        cin >> c >> n;
        c = ((((9*c)/5 + 32 + n) -32)*5)/9;
        cout<<fixed<<setprecision(2)<<c<<endl;
    }
    return 0;
}

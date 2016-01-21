#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    while (n--) {
        long long int a,b;
        cin>>a>>b;
        long long int x = (a + b)/2;
        long long int y = (a - b)/2;
        if (x >= 0 && y>=0 && x + y == a && x - y == b) {
            cout<<x<<" "<<y<<endl;
        }
        else {
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
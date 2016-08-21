#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b;
    for (int i = 0; i < n; i++) {
        cin>>a>>b;    
        if (a>b) swap(a,b);
        int sum = 0;
        for (int i=a+1;i<b;i++) {
            if (abs(i)%2L==1) sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
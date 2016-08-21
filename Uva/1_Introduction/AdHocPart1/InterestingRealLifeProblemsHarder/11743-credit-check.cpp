#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
    int sum1 = 0;
    while(n!= 0) {
        sum1 += n%10;
        n/=10;
    }
    return sum1;
}
int main () {
    int t;
    cin >> t;
    while(t--) {
        string card = "";
        string s;
        for(int i = 0; i < 4; i++) {
            cin >> s;
            card += s;
        }
        int even = 0;
        for (int i = 0 ; i < 16;i+=2) {
            even += fun((card[i] - 48)*2);
        }
        int odd = 0;
        for (int i = 1;i < 16; i+=2) {
            odd += (card[i] - 48);
        }
        if((even + odd)%10== 0) {
            cout<<"Valid"<<endl;
        } else {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}

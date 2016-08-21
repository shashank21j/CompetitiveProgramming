#include <bits/stdc++.h>
using namespace std;
int len (int n) {
    int res = 0;
    n = abs(n);
    while (n != 0) {
        res+=1;
        n/=10;
    }
    return res;
}
int main () {
    int n;
    int cnt = 1;
    while (1) {
        cin>>n;
        if (n == 0) {
            break;
        }
        vector <int> vals(n);
        int sum = 0;
        for (int i = 0;i < n; i++) {
            cin>>vals[i];
            sum += vals[i];
        }
        int divi = __gcd(sum,n);
        sum/=divi;
        n/=divi;
        int inte = sum/n;
        if (inte < 0) {
            sum = abs(sum);
            n = abs(n);
        }


        cout<<"Case "<<cnt++<<":"<<endl;
        sum = sum%n;
        int sum_len = len(sum);
        int n_len = len(n);
        int n_inte = len(inte);
        int diff = abs(sum_len - n_len);
        if (sum == 0) {
            if (inte < 0) {
                cout<<"- ";cout<<abs(inte)<<endl;
            }
            else {
                cout<<inte<<endl;
            }
        }
        else {
            if (inte == 0) {
                if (sum * n < 0) {
                    n_inte += 2;
                }
                for (int i = 0; i < n_inte; i++) {
                    cout<<" ";
                }
                if (sum_len < n_len) {
                    for (int i = 0;i<diff;i++) {
                        cout<<" ";
                    }
                }
                cout<<abs(sum)<<endl;
                if (sum * n < 0) {
                    cout<<"- ";
                }
                for (int i = 0; i< max(sum_len,n_len);i++) {
                    cout<<"-";
                }
                cout<<endl;
                for (int i = 0; i < n_inte; i++) {
                    cout<<" ";
                }
                if (sum_len > n_len) {
                    for (int i = 0;i<diff;i++) {
                        cout<<" ";
                    }
                }
                cout<<abs(n)<<endl;
            }
            else {
                if (inte < 0) {
                    n_inte += 2;
                }
                for (int i = 0; i < n_inte;i++) {
                    cout<<" ";
                }
                if (sum_len < n_len) {
                    for (int i = 0;i<diff;i++) {
                        cout<<" ";
                    }
                }
                cout<<sum<<endl;
                if (inte < 0) {
                    cout<<"- ";
                }
                cout<<abs(inte);
                for (int i = 0;i<max(sum_len,n_len);i++) {
                    cout<<"-";
                }
                cout<<endl;
                for (int i = 0; i < n_inte;i++) {
                    cout<<" ";
                }
                if (sum_len > n_len) {
                    for (int i = 0;i<diff;i++) {
                        cout<<" ";
                    }
                }
                cout<<n<<endl;
            }
        }
    }
    return 0;
}
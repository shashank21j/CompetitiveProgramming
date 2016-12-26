#include <bits/stdc++.h>
using namespace std;

long long int summation(long long int n) {
    return (n*(n+1))/2;
}

long long int fast_exp(long long int base,long long int exp) {
    long long res = 1;
    while(exp > 0) {
       if(exp % 2 == 1) res = (res * base);
       base = (base * base);
       exp /= 2;
    }
    return res;
}

long long int polynomial(vector<long long int> &poly, long long int n) {
    long long int sum = 0;
    for (long long int i = 0;i < poly.size();i++) {
        sum += poly[i]*fast_exp(n,i);
    }
    return sum;
}

int main () {
    int C;
    cin>>C;
    while(C--) {
        int degree;
        cin>>degree;
        vector <long long int> poly(degree + 1);
        for (int i = 0;i< degree + 1;i++) {
            cin>>poly[i];
        }
        long long int D;
        cin>>D;
        long long int K,k;
        cin>>k;
        K = k/D;
        bool flag = false;
        if (k%D == 0) flag = true;

        //cout<<K<<endl;
        long long int mid = 1;
        long long int left = 0;
        long long int right = 1500;

        while (left < right) {
            mid = (left + right)/2;
            if (D*summation(mid) > k) {
                right = mid - 1;
            }
            else if (D*summation(mid) <= k){
                left = mid + 1;
            }
        }
        if (mid <= 3) mid = 1;
        else mid -= 2;
        while (D*summation(mid) < k) mid += 1;

        cout<<polynomial(poly, mid)<<endl;
    }
    return 0;
}

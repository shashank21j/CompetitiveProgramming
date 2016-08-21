#include<iostream>
#define MOD 10000007
using namespace std;
long long fast_exp(long long int base, int exp) {
    long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
int main () {
    long long int n,k;
    cin>>n>>k;
    while(n!=0 || k!=0) {
        cout<<(fast_exp(n,k) + fast_exp(n,n) + 2*(fast_exp(n-1,k) + fast_exp(n-1,n-1) ) + MOD )%MOD<<endl;
        cin>>n>>k;
    }
    return 0;
}


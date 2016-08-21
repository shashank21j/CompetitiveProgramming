#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int res = n;
	int wra = res;
    while(wra>=m){
        res += wra/m;
        wra = wra/m + wra%m;
    }
	cout<<res<<endl;
	return 0;
}

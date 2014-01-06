#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main(void) {
    int n,i;
    cin>>n;
    int num[100]={0};
    int temp;
    int onecount=0,doublecount;
    for (i=0;i<2*n;i++) {
	cin>>temp;
	num[temp]++;
    }
    vector <int> d;
    for (i=10;i<100;i++) {
    	if (num[i]==1) onecount++;
	else if (num[i]==2) onecount+=2;
	else if (num[i]>2) d.push_back(num[i]);
    }
    sort(d.begin(),d.end());
    doublecount=2*n-onecount;
    int x;
    int cnt=0;
    for (i=0;i<d.size();i++) {
    	x+=d[i]/2 -1;
	if (d[i]%2==1){
	    cnt++;
	}
    }
    x+=cnt/2;
    if (cnt%2==0) cout<<(n-x)*(n-x)<<endl;
    else cout<<(n-x-1)*(n-x)<<endl;
    return 0;
}


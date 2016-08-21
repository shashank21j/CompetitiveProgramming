#include<iostream>
#include<cstring>

using namespace std;

int main (void) {
    int i;
    int n,k,t;
    int count;
    int anum;
    cin>>n>>k;
    int a[11];
    int cnt=0;
    for (i=0;i<n;i++) {
    	count=0;
	cin>>anum;
	for (int j =0; j<k+1;j++) a[j]=0;
	while(anum!=0) {
	    t=anum%10;
	    if (t<=k && a[t]==0) {count++;a[t]=1;}
	    anum/=10;
	}
	if (count==k+1) 
	    cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

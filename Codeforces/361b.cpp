#include<iostream>
#include<vector>
using namespace std;
int main (void) {
	int n, k;
	int i;
	cin>>n>>k;
	vector<int> ans;
	for ( i=1;i<n+1;i++) {
		ans.push_back(i);
	}
	if (k==n) {
		cout<<-1<<endl;
		return 0;
	}

	if (k==1 && n==1) {
		cout<<-1<<endl;
		return 0;
	}

	k=n-k;
	if (n==1||k==1) {
		for (i=0;i<n;i++) {
			cout<<ans[i]<<' ';
		}
		cout<<endl;
		return 0;
	}
	
	if (k%2==0){
		for (i=0;i<k;i+=2) {
			ans[i]=ans[i]+ans[i+1];
			ans[i+1]=ans[i]-ans[i+1];
			ans[i]=ans[i]-ans[i+1];
		}
	}
	if (k%2==1 && k>1){
		int temp=ans[0];
		ans[0]=ans[2];
		ans[2]=ans[1];
		ans[1]=temp;
		for (i=3;i<k;i+=2) {
			ans[i]=ans[i]+ans[i+1];
			ans[i+1]=ans[i]-ans[i+1];
			ans[i]=ans[i]-ans[i+1];
		}
	}
	for (i=0;i<n;i++) {
	    cout<<ans[i]<<' ';
	}
	cout<<endl;
	return 0;
}

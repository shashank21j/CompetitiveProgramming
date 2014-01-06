#include<iostream>
#include<vector>

using namespace std;
int main (void) {
    int n,k;
    cin>>n>>k;
    int t=n/k;
    int i;
    vector <int> co;
    int temp;
    for (i=0;i<n;i++) {
    	cin>>temp;
	co.push_back(temp);
    }
    int j;
    int minsum=99999999;
    int index=1;
    for (i=0;i<k;i++) {
	int sum=co[i];
    	for (j=i+k;j<n;j+=k){
	    sum+=co[j];
	}
	if (sum<minsum) {minsum=sum;index = i+1;}
    }
    cout<<index<<endl;
}

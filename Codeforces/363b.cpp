#include<iostream>
#include<vector>

using namespace std;

int main (void) {
    int n,k;
    int i;
    cin>>n>>k;
    int mink=0;
    vector <int> arr;
    int temp;
    int kz=1;
    for (i=0;i<k;i++) {
	cin>>temp;
	arr.push_back(temp);
	mink+=temp;
    }
    int curr=mink;
    for (i=k;i<n;i++) {
	cin>>temp;
	arr.push_back(temp);
	curr=curr-arr[i-k]+temp;
	if (curr <mink ) {mink=curr;
	    kz=i-k+2;
	}
    }
    cout<<kz<<endl;
}

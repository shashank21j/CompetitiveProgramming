#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main (void) {
    	int n,m;
	cin>>n;
	cin>>m;
	int arr[m];
	for (int i=0;i<m;i++) {
		cin>>arr[i];
	}
	sort(arr, arr+m);
	if (arr[0]==1 || arr[m-1]==n) {
	    cout<<"NO"<<endl;
	    return 0;
	}
	int flag=0;
	for (int i=0;i<m-2;i++){
	   if (arr[i+2]-arr[i+1] + arr[i+1]-arr[i] ==2 ) {
	   	cout<<"NO"<<endl;
		flag=1;
		break;
	   }
	}
	if (flag==0) cout<<"YES"<<endl;
	return 0;
}

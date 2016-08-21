#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	int t1,t2;
	while(t--) {
		int a, b, c;
		cin>>a>>b>>c;
		vector <int> jumps(100,0);
		vector <int> arr(a,1);
		for (int i = 0;i<b;i++) {
			cin>>t1>>t2;
			jumps[t1] = t2;
		}
		int cnt = 0;
		vector<int> moves(c);
		for (int i = 0;i<c;i++) {
			cin>>moves[i];
		}
		for (int i = 0;i<c;i++) {
			t1 = moves[i];
			arr[cnt] += t1;
			if (jumps[arr[cnt]]!=0) arr[cnt] = jumps[arr[cnt]];
			if (arr[cnt] >= 100) {
				arr[cnt] = 100;
				break;
			}
			cnt += 1;
			if (cnt == a) cnt = 0;
		}
		for (int i = 0;i<a;i++) {
			cout<<"Position of player "<<i+1<<" is "<<arr[i]<<"."<<endl;
		}
	}
	return 0;
}
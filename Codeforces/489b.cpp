#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> gents(n);
	for (int i=0;i<n;i++) {
		cin>>gents[i];
	}
	sort(gents.begin(), gents.end());
	int m;
	cin>>m;
	vector <int> ladies(m);
	for (int i=0;i<m;i++) {
		cin>>ladies[i];
	}
	sort(ladies.begin(), ladies.end());
	int t1 = 0, t2 = 0;
	int count = 0;
	while (t1 < n && t2 < m) {
		if (abs(gents[t1] - ladies[t2]) <= 1) {
			t1++;
			t2++;
			count++;
		}
		else if (gents[t1] < ladies[t2] - 1) {
			t1++;
		}
		else if (gents[t1] > ladies[t2] + 1) {
			t2++;
		}
	}
	cout<<count<<endl;
	return 0;
}
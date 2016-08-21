#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,q;
	int temp;
	cin>>n>>q;
	int cas = 1;
	while(n+q!=0) {
		cout<<"CASE# "<<cas<<":"<<endl;
		vector <int > Arr(n);
		for (int i=0;i<n;i++) {
			cin>>Arr[i];
		}
		sort(Arr.begin(), Arr.end());
		for (int i=0;i<q;i++) {
			cin>>temp;
			//cout<<Arr.size()<<endl;
			vector <int>::iterator t = find(Arr.begin(), Arr.end(),temp); 
			if (t == Arr.end()) cout<<temp<<" not found"<<endl;
			else cout<<temp<<" found at "<<distance(Arr.begin(),t)+1<<endl;
		}
		Arr.clear();
		cin>>n>>q;
		cas++;
	} 
	return 0;
}
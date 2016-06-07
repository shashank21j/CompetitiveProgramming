#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	queue<int> q;
	vector <int> out;
	while (1) {
		cin>>n>>k;
		vector <int> ppl(n+1,40);
		if (n == 0 && k == 0) {
			break;
		}
		for(int i = 1;i<=n;i++) {
			q.push(i);
		}
		int dispense = 1;
		int store = 0;
		while (!q.empty()) {
			int person = q.front();
			q.pop();
			if (dispense == k+1) dispense = 1;
			int temp = ppl[person];

			store += dispense;
			dispense++;
			cout<<person<<" "<<temp<<" "<<store<<" "<<dispense<<endl;
			ppl[person] -= min(store,ppl[person]);
			store -= min(temp,store);
			if (ppl[person]>0) q.push(person);
			else out.push_back(person);
			
		}
		for (int i = 0;i<out.size();i++) {
			cout<<out[i]<<" ";
		}
		cout<<endl;
		ppl.clear();
		out.clear();
	}
	return 0;
}
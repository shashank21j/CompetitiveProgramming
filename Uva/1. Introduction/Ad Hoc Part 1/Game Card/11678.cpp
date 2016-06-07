#include "bits/stdc++.h"
using namespace std;
int main () {
	while (1) {
		int a,b;
		cin>>a>>b;
		if (a == 0 && b == 0) {
			break;
		}
		int val;
		set <int> a_val;
		set <int> b_val;
		for (int i = 0;i<a;i++) {
			cin>>val;
			a_val.insert(val);
		}
		for (int i = 0;i<b;i++) {
			cin>>val;
			b_val.insert(val);
		}
		int uni_a = 0;
		int uni_b = 0;
		for (auto i:a_val) {
			if (b_val.find(i)==b_val.end()) {
				uni_a++;
			}
		}
		for (auto i:b_val) {
			if (a_val.find(i) == a_val.end()) {
				uni_b++;
			}
		}
		cout<<min(uni_a,uni_b)<<endl;
	}
	return 0;
}
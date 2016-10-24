#include <bits/stdc++.h>
using namespace std;

vector <vector <int> >  factor(int n) {
	vector <vector<int>> res;
	vector <int> temp;
	for (int i = 2; i * i <= n; i++) {
		temp.clear();
		if (n % i == 0) {
			temp.push_back(i);
			temp.push_back(n / i);
			res.push_back(temp);
		}
	}
	return res;
}
int main() {
	cin.sync_with_stdio(0);cin.tie(0);
	int n;
	while (1) {
		cin >> n; 
		set <vector <int> > result;
		vector <vector <int> > temp;
		if (n == 0) {
			break;
		}
		temp = factor(n);
		for (auto i: temp) {
			result.insert(i);
		}
		bool flag = true;
		while(flag) {
			vector <vector <int> > new_temp;
			flag = false;
			for (int i = 0; i < (int)temp.size(); i++) {
				vector <int> tt1 = temp[i];
				for (auto jj:factor(tt1.back())) {
					flag = true;
					vector <int> tt2 = temp[i];
					tt2.pop_back();
					tt2.push_back(jj[0]);
					tt2.push_back(jj[1]);
					new_temp.push_back(tt2);
					sort(tt2.begin(), tt2.end());
					result.insert(tt2);
				}
			}
			temp = new_temp;
		}
		cout << (int)result.size() << endl;
		for (auto i:result) {
			for (int j = 0; j < (int)i.size(); j++) {
				cout << i[j];
				if (j < (int)i.size() - 1) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
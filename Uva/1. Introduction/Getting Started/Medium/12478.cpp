#include <bits/stdc++.h>
using namespace std;
int main() {
	cout<<"KABIR"<<endl;

	/*
	int n;
	cin>>n;
	vector<string> setters(n);
	for (int i = 0; i < n; i++) {
		cin>>setters[i];
	}
	int m;
	cin>>m;
	vector<string> grid(m);
	for (int i = 0; i < m; i++) {
		cin>>grid[i];
	}
	map <vector<char> ,int> dic;
	for (int id = 0; id < n; id++) {
		vector<char> v;
		for (int i = 0; i < setters[id].length(); i++) {
			v.push_back(setters[id][i]);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				vector<char> w;
				if(j + v.size() <= 9) {
					for (int k = j; k < j+v.size(); k++) {
						w.push_back(grid[i][k]);
					}
					sort(w.begin(), w.end());
					if (v == w) {
						cout<<i<<" "<<j<<" accross"<<endl;
						for(auto ij:v) cout<<ij;cout<<endl;
						dic[v]++;
					}
				}
				w.clear();
				if(i + v.size() <= 9) {
					for (int k = i; k < i+v.size(); k++) {
						w.push_back(grid[k][j]);
					}
					sort(w.begin(), w.end());
					if (v == w) {
						cout<<i<<" "<<j<<" down"<<endl;
						for(auto ij:v) cout<<ij;cout<<endl;
						dic[v]++;
					}
				}
			}
		}	
	}
	for (map <vector<char>, int> :: iterator it = dic.begin(); it!=dic.end(); it++) {
		for (auto id:it->first) cout<<id;
		cout<<" "<<it->second<<endl;
	}
	*/
	return 0;
}
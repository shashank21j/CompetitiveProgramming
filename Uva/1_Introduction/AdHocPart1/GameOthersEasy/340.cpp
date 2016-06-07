#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int counter = 0;
	while (1) {
		cin>>n;
		if (n == 0) break;
		counter++;
		vector <int> arr(n);
		vector <int> hash1(10,0);
		for (int i = 0; i < n;i++) {
			cin>>arr[i];
			hash1[arr[i]]++;
		}
		vector <int> brr(n);
		bool exit_flag = false;
		cout<<"Game "<<counter<<":"<<endl;
		while (1) {
			int strong = 0;
			vector<int> hash2(10,0);
			for (int i = 0; i < n; i++) {
				cin>>brr[i];
				if (arr[i] == brr[i]) strong++;
				hash2[brr[i]]++;
				if (brr[i] == 0) {
					exit_flag = true;
				}
			}
			if (exit_flag) break;
			int weak = 0;
			for (int i = 0;i<10;i++) {
				weak+=min(hash2[i],hash1[i]);
			}
			cout<<"    ("<<strong<<","<<weak-strong<<")"<<endl;
			brr.clear();
			hash2.clear();
		}
		arr.clear();
		hash1.clear();
	}
	return 0;
}
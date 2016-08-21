#include <bits/stdc++.h>

using namespace std;
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	vector <int> Arr(m);
	int fedor;
	for (int i=0;i<m;i++) {
		cin>>Arr[i];
	}
	cin>>fedor;
	int count = 0;
	vector <int> fedor_bits;
	for (int i = 0;i<20;i++) {
		fedor_bits.push_back(fedor%2);
		fedor/=2;
	}
	for (int i = 0;i<m;i++) {
		vector <int> temp_bits;
		int temp = Arr[i];
		for (int j = 0;j<20;j++) {
			temp_bits.push_back(temp%2);
			temp/=2;
		}
		int check = 0;
		for (int j=0;j<20;j++) {
			if (fedor_bits[j] != temp_bits[j]) check++;
		}
		if (check<=k) count++;
	}
	cout<<count<<endl;
	return 0;
}
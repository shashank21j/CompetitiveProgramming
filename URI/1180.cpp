#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	int index = -1;
	int mini = 999999999;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		if (Arr[i]<mini) {
			mini = Arr[i];
			index = i;
		}
	}
	cout<<"Menor valor: "<<mini<<endl;
	cout<<"Posicao: "<<index<<endl;
	return 0;
}
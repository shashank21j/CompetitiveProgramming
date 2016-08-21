#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	int chest = 0;
	int biceps = 0;
	int back = 0;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		if (i%3 == 0) chest += Arr[i];
		else if (i%3 == 1) biceps += Arr[i];
		else if (i%3 == 2) back += Arr[i];
	}
	if (chest>biceps && chest>back) cout<<"chest"<<endl;
	else if (biceps>chest && biceps>back) cout<<"biceps"<<endl;
	else if (back>biceps && back>chest) cout<<"back"<<endl;
	return 0;
}
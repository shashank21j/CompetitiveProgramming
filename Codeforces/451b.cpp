#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	vector <int> dup(n);
	for (int i = 0; i<n;i++) {
		cin>>Arr[i];
		dup[i] = Arr[i];
	}
	sort(dup.begin(),dup.end());
	//cout<<"sort finished"<<endl;
	int start,end;
	int sort_flag = 0;
	for (int i=0;i<n;i++) {
		if (Arr[i] != dup[i]) {
			sort_flag = 1;
			start = i;
			break;
		}
	}
	if (sort_flag == 0) {
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
		return 0;
	}
	//cout<<"start found "<<start<<endl;
	for (int i=n-1;i>=0;i--) {
		if (Arr[i] != dup[i]) {
			end = i;
			break;
		}	
	}
	//cout<<"end found "<<end<<endl;
	int t1 = start, t2 = end;
	while (start <= t2) {
		if (Arr[start] != dup[end]) {
			cout<<"no"<<endl;
			return 0;
		}
		start++;
		end--;
	}

	cout<<"yes"<<endl;
	cout<<t1+1<<" "<<t2+1<<endl;
	return 0;
}
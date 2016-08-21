#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int counter = 1;
	while (n) {
		vector < pair <int,int> > Arr(n);
		for (int i=0;i<n;i++) {
			cin>>Arr[i].first>>Arr[i].second;
		}
		double sum1=0, sum2 = 0;
		cout<<"Cidade# "<<counter <<":"<<endl;
		for (int i=0;i<n;i++) {
			sum1+=Arr[i].first;
			sum2+=Arr[i].second;
			int t1 = Arr[i].second/Arr[i].first;
			Arr[i].second = Arr[i].first;
			Arr[i].first = t1;
		}
		sort(Arr.begin(), Arr.end());
		int sum = Arr[0].second;
		int t = Arr[0].first;
		for (int i=1;i<n;i++) {
			if (Arr[i].first == t) {
				sum += Arr[i].second;
			}
			else {
				cout<<sum<<"-"<<t<<" ";
				t = Arr[i].first;
				sum = Arr[i].second;
			}
		}
		cout<<sum<<"-"<<t<<endl;
		printf("Consumo medio: %.2lf m3.\n",floor((sum2/sum1)*100)/100.0);
		cin>>n;
		if (n>0) cout<<endl;
		counter++;
		Arr.clear();
	}
	return 0;
}
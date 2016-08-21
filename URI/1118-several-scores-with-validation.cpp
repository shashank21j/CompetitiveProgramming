#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<float> Arr;
	float temp;
	int flag = 1;
	while (flag == 1) {
		while (Arr.size()<2) {
			cin >> temp;
			if (temp >= 0.0 && temp <= 10.0) {
				Arr.push_back(temp);
			}
			else {
				cout<<"nota invalida"<<endl;
			}
		}
		cout<<fixed<<setprecision(2);
		cout<<"media = "<<(Arr[0] + Arr[1])/2.0<<endl;
		Arr.clear();
		cout<<"novo calculo (1-sim 2-nao)"<<endl;
		cin >> flag;
		while(flag!=1 && flag!= 2) {
			cout<<"novo calculo (1-sim 2-nao)"<<endl;
			cin >> flag;
		}
	}
	return 0;
}

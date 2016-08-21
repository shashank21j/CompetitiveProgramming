#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <float> Arr(3);
	vector <float> Brr(3);
	cout<<fixed<<setprecision(1);
	for (int i=0;i<3;i++) {
		cin>>Arr[i];
		Brr[i] = Arr[i];
	}
	sort(Arr.begin(), Arr.end());
	if (Arr[0]+Arr[1]>Arr[2]) {
		cout<<"Perimetro = "<<Arr[0]+ Arr[1] + Arr[2]<<endl;
	}
	else {
		cout<<"Area = "<<(Brr[0] + Brr[1])*Brr[2]/2<<endl;
	}
	return 0;
}
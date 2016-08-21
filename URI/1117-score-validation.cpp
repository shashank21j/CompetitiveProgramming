#include <bits/stdc++.h>
using namespace std;
#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	vector<float> Arr;
	float temp;
	while (Arr.size()<2) {
		ISTREAM>>temp;
		if (temp >= 0.0 && temp <= 10.0) {
			Arr.push_back(temp);
		}
		else {
			cout<<"nota invalida"<<endl;
		}
	}
	cout<<fixed<<setprecision(2);
	cout<<"media = "<<(Arr[0] + Arr[1])/2.0<<endl;
	return 0;
}
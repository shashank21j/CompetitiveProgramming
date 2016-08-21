#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	int temp;
	char cr;
	int C = 0;
	int R = 0;
	int S = 0;
	for (int i = 0; i < n; i++) {
		ISTREAM>>temp>>cr;
		if (cr == 'R') {
			R += temp;
		}
		else if (cr == 'S') {
			S+=temp;
		}
		else if (cr == 'C') {
			C+=temp;
		}
	}
	cout<<"Total: "<<R+C+S<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<C<<endl;
	cout<<"Total de ratos: "<<R<<endl;
	cout<<"Total de sapos: "<<S<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Percentual de coelhos: "<<(C*100.0)/(R+C+S)<<" %"<<endl;
	cout<<"Percentual de ratos: "<<(R*100.0)/(R+C+S)<<" %"<<endl;
	cout<<"Percentual de sapos: "<<(S*100.0)/(R+C+S)<<" %"<<endl;
	return 0;
}
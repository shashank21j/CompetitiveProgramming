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
	int alcohol=0,gasoline=0,diesel=0;
	while(1) {
		ISTREAM>>n;
		if (n == 1) alcohol++;
		else if (n==2) gasoline++;
		else if (n==3) diesel++;
		else if (n==4) break;
	}
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<alcohol<<endl;
	cout<<"Gasolina: "<<gasoline<<endl;
	cout<<"Diesel: "<<diesel<<endl; 
	return 0;
}
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
	int temp;
	int par=0,impar = 0,pos = 0,neg = 0;
	for (int i = 0; i < 5; i++) {
		ISTREAM>>temp;
		if (temp%2==0) {
			par++;
		}
		else {
			impar++;
		}
		if (temp>0) {
			pos++;
		}
		else if (temp<0){
			neg++;
		}
	}
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<impar<<" valor(es) impar(es)"<<endl;
	cout<<pos<<" valor(es) positivo(s)"<<endl;
	cout<<neg<<" valor(es) negativo(s)"<<endl;
	return 0;
}
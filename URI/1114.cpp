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
	ISTREAM>>temp;
	while(temp != 2002) {
		cout<<"Senha Invalida"<<endl;
		ISTREAM>>temp;
	}
	cout<<"Acesso Permitido"<<endl;
	return 0;
}
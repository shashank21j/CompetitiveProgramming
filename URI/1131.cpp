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
	int a,b;
	int inter= 0;
	int gremio = 0;
	int draw = 0;
	int flag = 1; 
	while (flag == 1) {
		ISTREAM>>a>>b;
		if (a>b) inter++;
		else if (a<b) gremio++;
		else draw++;
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		ISTREAM>>flag;
	}
	cout<<gremio+inter+draw<<" grenais"<<endl;
	cout<<"Inter:"<<inter<<endl;
	cout<<"Gremio:"<<gremio<<endl;
	cout<<"Empates:"<<draw<<endl;
	if (inter>gremio) cout<<"Inter venceu mais"<<endl;
	else if (gremio>inter) cout<<"Gremio venceu mais"<<endl;
	else cout<<"Nao houve vencedor"<<endl;
	return 0;
}
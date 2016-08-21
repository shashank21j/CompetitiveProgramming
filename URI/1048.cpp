#include <bits/stdc++.h>
using namespace std;
int main() {
	float n;
	cin>>n;
	float inc;
	cout<<fixed<<setprecision(2);
	if (n >= 0 && n <= 400.0 ) {
		inc = (15*n)/100;
		cout<<"Novo salario: "<<n+inc<<endl;
		cout<<"Reajuste ganho: "<<inc<<endl;
		cout<<"Em percentual: 15 %"<<endl;
	}
	else if (n > 400 && n <= 800.0 ) {
		inc = (12*n)/100;
		cout<<"Novo salario: "<<n+inc<<endl;
		cout<<"Reajuste ganho: "<<inc<<endl;
		cout<<"Em percentual: 12 %"<<endl;
	}
	else if (n > 800 && n <= 1200.0 ) {
		inc = (10*n)/100;
		cout<<"Novo salario: "<<n+inc<<endl;
		cout<<"Reajuste ganho: "<<inc<<endl;
		cout<<"Em percentual: 10 %"<<endl;
	}
	else if (n > 1200 && n <= 2000.0 ) {
		inc = (7*n)/100;
		cout<<"Novo salario: "<<n+inc<<endl;
		cout<<"Reajuste ganho: "<<inc<<endl;
		cout<<"Em percentual: 7 %"<<endl;
	}
	else if (n > 2000) {
		inc = (4*n)/100;
		cout<<"Novo salario: "<<n+inc<<endl;
		cout<<"Reajuste ganho: "<<inc<<endl;
		cout<<"Em percentual: 4 %"<<endl;
	}
	return 0;
}